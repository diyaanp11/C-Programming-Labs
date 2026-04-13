#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    
    int temp = num;
    while(temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    sum = firstDigit + lastDigit;
    
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum = %d\n", sum);
    
    return 0;
}