#include <stdio.h>

int main() {
    FILE *fptr;
    char text[200];
    char filename[50];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();
    
    fptr = fopen(filename, "a");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    fputs(text, fptr);
    
    fclose(fptr);
    printf("Text appended to %s successfully!\n", filename);
    
    return 0;
}