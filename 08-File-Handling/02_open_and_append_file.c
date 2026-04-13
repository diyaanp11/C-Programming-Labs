#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];
    
    fptr = fopen("test.txt", "a");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    fprintf(fptr, "%s", text);
    
    fclose(fptr);
    printf("Text appended successfully!\n");
    
    return 0;
}