#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    int i, j, len;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline
    len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    // Copy to rev in reverse
    for(i = 0, j = len-1; j >= 0; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    
    if(strcmp(str, rev) == 0) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}