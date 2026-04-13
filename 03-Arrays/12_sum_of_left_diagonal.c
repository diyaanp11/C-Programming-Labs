#include <stdio.h>

int main() {
    int matrix[10][10], n, i, sum = 0;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Left diagonal (top-left to bottom-right)
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of left diagonal = %d\n", sum);
    
    return 0;
}