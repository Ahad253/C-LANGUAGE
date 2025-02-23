#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* insertatend(struct node *start, int num);
struct node* insertatbegin(struct node *start, int num);
struct node* delbeg(struct node *start);
struct node* delend(struct node *start);
struct node* delafter(struct node *start, int value);
void generalinsertion(struct node *start, int num, int value);

struct node* createList(int n) {
    struct node* start = NULL;
    int num;
    printf("Enter %d elements:\n", n);
    int i=0;
    for ( i = 0; i < n; i++) {
        scanf("%d", &num);
        start = insertatend(start, num);
    }
    return start;
}

struct node* search(struct node *start, int value) {
    struct node *p = start;
    while (p != NULL) {
        if (p->data == value)
            return p;
        p = p->next;
    }
    return NULL;
}

int empty(struct node *start) {
    return (start == NULL);
}

void print(struct node* ptr) {
    printf("Elements:");
    while (ptr != NULL) {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node* insertatbegin(struct node *start, int num) {
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    newn->data = num;
    newn->next = start;
    newn->prev = NULL;
    if (start != NULL)
        start->prev = newn;
    return newn;
}

struct node* insertatend(struct node *start, int num) {
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    newn->data = num;
    newn->next = NULL;
    if (empty(start))
        return newn;
    struct node *p = start;
    while (p->next != NULL)
        p = p->next;
    p->next = newn;
    newn->prev = p;
    return start;
}

void generalinsertion(struct node *start, int num, int value) {
    struct node *p = search(start, value);
    if (p == NULL) {
        printf("Node not found - item not inserted\n");
        return;
    }
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    newn->data = num;
    newn->next = p->next;
    newn->prev = p;
    if (p->next != NULL)
        p->next->prev = newn;
    p->next = newn;
}

struct node* delbeg(struct node *start) {
    if (empty(start)) {
        printf("List empty - deletion not possible\n");
        return start;
    }
    struct node *pdel = start;
    start = start->next;
    if (start != NULL)
        start->prev = NULL;
    free(pdel);
    printf("Node deleted...\n");
    return start;
}

struct node* delend(struct node *start) {
    if (empty(start)) {
        printf("List empty - deletion not possible\n");
        return start;
    }
    struct node *p = start;
    if (p->next == NULL) {
        free(p);
        return NULL;
    }
    while (p->next != NULL)
        p = p->next;
    p->prev->next = NULL;
    free(p);
    printf("Last node deleted...\n");
    return start;
}

struct node* delafter(struct node *start, int value) {
    struct node *p = search(start, value);
    if (p == NULL || p->next == NULL) {
        printf("Node not found or no node after it to delete\n");
        return start;
    }
    struct node *pdel = p->next;
    p->next = pdel->next;
    if (pdel->next != NULL)
        pdel->next->prev = p;
    free(pdel);
    printf("Node after %d deleted...\n", value);
    return start;
}

int main() {
    struct node *start = NULL;
    int operations, num, value, n;
    
    printf("Enter the number of elements for the initial list: ");
    scanf("%d", &n);
    start = createList(n);
    print(start);
    
    do {
        printf("\nSelect operation to perform:\n");
        printf("1 - Insertion at beginning\n");
        printf("2 - Insertion at end\n");
        printf("3 - Insertion after a value\n");
        printf("4 - Deletion at beginning\n");
        printf("5 - Deletion at end\n");
        printf("6 - Deletion after a value\n");
        printf("7 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &operations);

        switch (operations) {
            case 1:
                printf("Enter the number to insert at beginning: ");
                scanf("%d", &num);
                start = insertatbegin(start, num);
                print(start);
                break;
            case 2:
                printf("Enter the number to insert at the end: ");
                scanf("%d", &num);
                start = insertatend(start, num);
                print(start);
                break;
            case 3:
                printf("Enter the number to insert: ");
                scanf("%d", &num);
                printf("Enter the element after which to insert: ");
                scanf("%d", &value);
                generalinsertion(start, num, value);
                print(start);
                break;
            case 4:
                start = delbeg(start);
                print(start);
                break;
            case 5:
                start = delend(start);
                print(start);
                break;
            case 6:
                printf("Enter the value after which to delete: ");
                scanf("%d", &value);
                start = delafter(start, value);
                print(start);
                break;
            case 7:
                printf("Exiting...\n");
                print(start);
                break;
            default:
                printf("Invalid choice! Please select a number from 1-8\n");
        }
    } while (operations != 7);
    return 0;
}

