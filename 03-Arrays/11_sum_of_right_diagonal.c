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
    
    // Right diagonal (top-right to bottom-left)
    for(i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i];
    }
    
    printf("Sum of right diagonal = %d\n", sum);
    
    return 0;
}