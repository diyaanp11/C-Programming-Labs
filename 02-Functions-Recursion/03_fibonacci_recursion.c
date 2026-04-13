#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}