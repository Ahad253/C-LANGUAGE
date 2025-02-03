#include <stdio.h>
#include <stdlib.h>

struct students {
    char rollno[10];
    char name[10];
    float marks;
};

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct students *ptr = (struct students *)malloc(n * sizeof(struct students));

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", ptr[i].name);
        printf("Enter roll number: ");
        scanf("%s", ptr[i].rollno);
        printf("marks:");
        scanf("%f",&ptr[i].marks);
    }

    for (i = 0; i < n; i++) {
        printf("\nRecord of Student %d:\n", i + 1);
        printf("Name: %s\n", ptr[i].name);
        printf("Roll No: %s\n", ptr[i].rollno);
        printf("Marks:%.2f ",ptr[i].marks);
    }

    free(ptr);

    return 0;
}

