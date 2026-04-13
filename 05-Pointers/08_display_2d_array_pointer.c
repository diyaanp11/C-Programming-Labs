#include <stdio.h>

int main() {
    int arr[3][3], i, j;
    int *ptr;
    
    printf("Enter 9 elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    ptr = &arr[0][0];
    
    printf("\nMatrix using pointer:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j));
        }
        printf("\n");
    }
    
    return 0;
}