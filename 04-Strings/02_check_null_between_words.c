#include <stdio.h>

int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Checking for null characters between words:\n");
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            printf("Space found at position %d\n", i);
        }
    }
    
    printf("String ends with null character at position %d\n", i);
    
    return 0;
}