#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
   int empty(struct node *start) {
    return start == NULL;
}
   struct node* insertatend(struct node *start, int num) {
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    if (!newn) {
        printf("Memory allocation failed!\n");
        return start;
    }
    newn->data = num;
    newn->next = NULL;

    if (empty(start)) return newn;

    struct node *p = start;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = newn;
    return start;
}

   struct node* createList() {
    struct node *start = NULL;
    int n, num,i=0;
    
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    if (n <= 0) return NULL;

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        start = insertatend(start, num);
    }

    return start;
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
    if (!newn) {
        printf("Memory allocation failed!\n");
        return start;
    }
    newn->data = num;
    newn->next = start;
    return newn;
}


struct node* insertAfter(struct node *start, int num, int value) {
    struct node *p = start;
    while (p != NULL && p->data != value) {
        p = p->next;
    }
    
    if (p == NULL) {
        printf("Node with value %d not found - item not inserted\n", value);
        return start;
    }

    struct node *newn = (struct node *)malloc(sizeof(struct node));
    if (!newn) {
        printf("Memory allocation failed!\n");
        return start;
    }

    newn->data = num;
    newn->next = p->next;
    p->next = newn;
    return start;
}

struct node* delbeg(struct node *start) {
    if (empty(start)) {
        printf("List empty - deletion not possible\n");
        return start;
    }

    struct node *pdel = start;
    start = start->next;
    free(pdel);
    printf("First node deleted...\n");

    return start;
}

struct node* delend(struct node *start) {
    if (empty(start)) {
        printf("List empty - deletion not possible\n");
        return start;
    }

    struct node *pdel = start, *prev = NULL;

    if (start->next == NULL) { 
        free(start);
        printf("Last node deleted...\n");
        return NULL;
    }

    while (pdel->next != NULL) {
        prev = pdel;
        pdel = pdel->next;
    }

    prev->next = NULL;
    free(pdel);
    printf("Last node deleted...\n");
    return start;
}

struct node* delAfter(struct node *start, int value) {
    struct node *p = start;
    
    while (p != NULL && p->data != value) {
        p = p->next;
    }

    if (p == NULL || p->next == NULL) {
        printf("No node found after value %d - deletion not possible\n", value);
        return start;
    }

    struct node *pdel = p->next;
    p->next = pdel->next;
    free(pdel);
    printf("Node after %d deleted...\n", value);

    return start;
}
int main() {
    struct node *start = createList();
    int num, value, operations;

    print(start);

    while (1) {
        printf("\nSelect operation to perform:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert after an element\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at the end\n");
        printf("6. Delete after an element\n");
        printf("7. Exit\n");

        scanf("%d", &operations);

    switch (operations) {
        case 1:
            printf("\nEnter the number to insert at the beginning: ");
            scanf("%d", &num);
            start = insertatbegin(start, num);
            print(start);
            break;

            case 2:
            printf("\nEnter the number to insert at the end: ");
            scanf("%d", &num);
            start = insertatend(start, num);
            print(start);
            break;

            case 3:
            printf("\nEnter the number to insert: ");
            scanf("%d", &num);
            printf("Enter the element after which to insert: ");
            scanf("%d", &value);
            start = insertAfter(start, num, value);
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
            printf("\nEnter the element after which to delete: ");
            scanf("%d", &value);
            start = delAfter(start, value);
            print(start);
            break;

            case 7:
            printf("Exiting program...\n");
            return 0;

            default:
            printf("Invalid option! Please select a number from 1-7.\n");
        }
    }

    return 0;
}

