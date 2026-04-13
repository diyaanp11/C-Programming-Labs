#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];
    
    fptr = fopen("test.txt", "w");
    
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Enter text to write: ");
    fgets(data, sizeof(data), stdin);
    
    fprintf(fptr, "%s", data);
    
    fclose(fptr);
    printf("File created and written successfully!\n");
    
    return 0;
}