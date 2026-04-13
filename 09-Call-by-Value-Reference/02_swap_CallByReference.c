#include <stdio.h>

// Function to swap two numbers using call by reference (pointers)
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside function - After swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before function call: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After function call: x = %d, y = %d\n", x, y);
    
    printf("\nNote: Actual swap happened because call by reference uses addresses!\n");
    
    return 0;
}