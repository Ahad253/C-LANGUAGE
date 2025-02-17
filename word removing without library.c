#include <stdio.h>

int main() {
    char str[200], word[50];
    char result[200];
    int i = 0, j = 0, k, match;

    printf("Enter the string: ");
    gets(str);
    
    printf("Enter word to remove: ");
    gets(word);
    
    int wordLen = 0, strLen = 0;
    while (word[wordLen] != '\0') wordLen++;  
    while (str[strLen] != '\0') strLen++;  
    
    int index = 0;
    while (i < strLen) {
        match = 1;
        k = 0;
        while (word[k] != '\0') {
        if (str[i + k] != word[k]) {
            match = 0;
            break;
            }
            k++;
        }
        
        if (match && (i == 0 || str[i - 1] == ' ') && (str[i + k] == ' ' || str[i + k] == '\0')) {
         i += wordLen;  
            while (str[i] == ' ') i++; 
        } else {
            result[index++] = str[i++];
        }
    }
    
    result[index] = '\0';  
    
    printf("Updated string: %s\n", result);
    
    return 0;
}
