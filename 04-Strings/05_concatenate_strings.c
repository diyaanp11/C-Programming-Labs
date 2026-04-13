#include <stdio.h>

void stringConcat(char *dest, char *src) {
    while(*dest != '\0') {
        dest++;
    }
    
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[200], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline from first string
    int i = 0;
    while(str1[i] != '\0') {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    
    stringConcat(str1, str2);
    
    printf("Concatenated string: %s", str1);
    
    return 0;
}