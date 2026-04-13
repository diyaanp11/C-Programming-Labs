#include <stdio.h>

// Function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before function call: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After function call: x = %d, y = %d\n", x, y);
    
    printf("\nNote: No actual swap happened because call by value creates copies!\n");
    
    return 0;
}