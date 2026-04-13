#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}