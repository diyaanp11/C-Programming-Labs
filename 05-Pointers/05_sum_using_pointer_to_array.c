#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    int *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = arr;
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    
    printf("Sum = %d\n", sum);
    
    return 0;
}