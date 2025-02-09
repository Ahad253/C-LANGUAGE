#include <stdio.h>

int main() {
    char str[100], word[100], result[100];
    int i = 0, j = 0, k = 0, found = 0;
    printf("Enter the string:\n ");
    gets(str);
    
    printf("Enter the word to remove:\n ");
    gets(word);

    int len1 = 0;
    while (str[len1] != '\0') {
        len1++;
    }
    int len2 = 0;
    while (word[len2] != '\0') {
        len2++;
    }
    i = 0;
    while (i <len1) {
        found = 1;
    for (j = 0; j < len2; j++) {
    if (str[i + j] != word[j]) {
    found = 0;
     break;
    }
    }
    if (found && (str[i + len2] == ' ' || str[i + len2] == '\0' || str[i + len2] == ',')) {
            i =i+len1;  
            if (str[i] == ' ') i++;  
    } else {
            result[k++] = str[i++];
    }
    }
    
    
    result[k] = '\0';
    i = 0;
    while (result[i] != '\0') {
        str[i] = result[i];
        i++;
    }
    str[i] = '\0';

    printf("Updated string: %s\n", str);

    return 0;
}

