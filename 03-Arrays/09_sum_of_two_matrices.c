#include <stdio.h>

int main() {
    int A[10][10], B[10][10], sum[10][10];
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("\nSum of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}