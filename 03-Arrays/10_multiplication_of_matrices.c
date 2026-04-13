#include <stdio.h>

int main() {
    int A[10][10], B[10][10], product[10][10] = {0};
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }
    
    printf("Enter first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("\nProduct of matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}