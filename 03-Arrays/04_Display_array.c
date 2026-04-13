#include <stdio.h>

int main() {
    int arr[100], n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}