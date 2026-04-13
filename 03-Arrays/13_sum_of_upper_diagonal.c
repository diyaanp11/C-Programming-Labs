#include <stdio.h>

int main() {
    int matrix[10][10], n, i, j, sum = 0;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Upper diagonal (above main diagonal)
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    
    printf("Sum of upper diagonal = %d\n", sum);
    
    return 0;
}