#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("\nChoose conversion:\n");
    printf("1. Uppercase\n");
    printf("2. Lowercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if(choice == 1) {
        for(i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
        }
        printf("Uppercase: %s", str);
    } else if(choice == 2) {
        for(i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
        printf("Lowercase: %s", str);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}