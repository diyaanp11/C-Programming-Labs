#include <stdio.h>

void stringCopy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char source[100], destination[100];
    
    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin);
    
    stringCopy(destination, source);
    
    printf("Source string: %s", source);
    printf("Copied string: %s", destination);
    
    return 0;
}