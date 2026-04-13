#include <stdio.h>
#include <ctype.h>

void convertToUpper(char *str) {
    while(*str) {
        *str = toupper(*str);
        str++;
    }
}

void convertToLower(char *str) {
    while(*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char text[100];
    int choice;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("\nChoose conversion:\n");
    printf("1. Uppercase\n");
    printf("2. Lowercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if(choice == 1) {
        convertToUpper(text);
        printf("Uppercase: %s", text);
    } else if(choice == 2) {
        convertToLower(text);
        printf("Lowercase: %s", text);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}