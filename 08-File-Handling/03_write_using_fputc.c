#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    
    fptr = fopen("output.txt", "w");
    
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Enter characters (press Enter to stop):\n");
    
    while ((ch = getchar()) != '\n') {
        fputc(ch, fptr);
    }
    
    fclose(fptr);
    printf("Characters written successfully!\n");
    
    return 0;
}