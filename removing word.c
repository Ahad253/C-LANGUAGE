#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20], temp[100];
    int i = 0, k = 0;

    printf("Enter a string: ");
    gets(str); 

    printf("Enter the word to remove: ");
    gets(word); 

    char *result = strstr(str, word); 


    if (result == NULL) {
        printf("\nString after removing the word: %s\n", str);
        return 0;
    }

    int x = result - str; 
    int j = strlen(word); 

    
    while (i < x) {
        temp[k++] = str[i++];
    }

    
    if (str[i] == ' ') {
        i++;
    }

    i =x+j;
    while (str[i] != '\0') {
        temp[k++] = str[i++];
    }

    temp[k] = '\0'; 

    printf("\nString after removing the word: %s\n", temp);
    return 0;
}

