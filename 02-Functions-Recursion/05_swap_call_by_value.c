#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before function call: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After function call: x = %d, y = %d\n", x, y);
    
    printf("\nNote: Values not swapped because call by value creates copies!\n");
    
    return 0;
}