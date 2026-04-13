#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    int i;
    
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial not defined for negative numbers!\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }
    
    return 0;
}