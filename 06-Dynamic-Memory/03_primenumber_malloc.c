#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, *primes;
    int count = 0, i;
    
    printf("Enter a number (N): ");
    scanf("%d", &n);
    
    // First pass: count primes
    for(i = 2; i <= n; i++) {
        if(isPrime(i)) {
            count++;
        }
    }
    
    // Allocate memory for primes
    primes = (int*)malloc(count * sizeof(int));
    
    if(primes == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Second pass: store primes
    int index = 0;
    for(i = 2; i <= n; i++) {
        if(isPrime(i)) {
            primes[index++] = i;
        }
    }
    
    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    
    free(primes);
    return 0;
}