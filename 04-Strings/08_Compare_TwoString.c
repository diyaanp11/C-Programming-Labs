#include <stdio.h>

int stringCompare(char *str1, char *str2) {
    while(*str1 != '\0' && *str2 != '\0') {
        if(*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];
    int result;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    result = stringCompare(str1, str2);
    
    if(result == 0) {
        printf("Strings are equal\n");
    } else if(result < 0) {
        printf("First string is smaller\n");
    } else {
        printf("First string is greater\n");
    }
    
    return 0;
}