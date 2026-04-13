#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    
    fptr = fopen("test.txt", "r");
    
    if (fptr == NULL) {
        printf("File does not exist!\n");
        return 1;
    }
    
    printf("File contents:\n");
    
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(fptr);
    
    return 0;
}