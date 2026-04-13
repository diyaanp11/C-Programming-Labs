#include <stdio.h>

int main() {
    int arr[100], n, i, max;
    int *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = arr;
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    
    max = *ptr;
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
    printf("Largest element = %d\n", max);
    
    return 0;
}