#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, odd = 0, even = 0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            
            if(matrix[i][j] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    
    return 0;
}