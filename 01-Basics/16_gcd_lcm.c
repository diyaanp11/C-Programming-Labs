#include <stdio.h>

int main() {
    int a, b, num1, num2, temp, gcd, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    num1 = a;
    num2 = b;
    
    while(num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    gcd = num1;
    lcm = (a * b) / gcd;
    
    printf("GCD of %d and %d = %d\n", a, b, gcd);
    printf("LCM of %d and %d = %d\n", a, b, lcm);
    
    return 0;
}