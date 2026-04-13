#include <stdio.h>
#include <math.h>

int main() {
    int num, *ptr, i, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    ptr = &num;
    
    if(*ptr <= 1) {
        isPrime = 0;
    } else {
        for(i = 2; i <= sqrt(*ptr); i++) {
            if(*ptr % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime) {
        printf("%d is a prime number\n", *ptr);
    } else {
        printf("%d is not a prime number\n", *ptr);
    }
    
    return 0;
}