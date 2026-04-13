#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    p1 = &a;
    p2 = &b;
    
    sum = *p1 + *p2;
    
    printf("Sum of %d and %d = %d\n", *p1, *p2, sum);
    
    return 0;
}