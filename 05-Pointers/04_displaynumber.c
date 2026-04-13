#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr;
    
    ptr = arr;
    
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }
    
    printf("Numbers are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    
    return 0;
}