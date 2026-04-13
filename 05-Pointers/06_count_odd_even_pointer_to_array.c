#include <stdio.h>

int main() {
    int arr[100], n, i, odd = 0, even = 0;
    int *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = arr;
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        
        if(*(ptr + i) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    
    return 0;
}