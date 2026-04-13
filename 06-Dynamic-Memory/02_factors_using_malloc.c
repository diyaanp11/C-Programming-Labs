#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *factors;
    int count = 0, i;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // First pass: count factors
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }
    
    // Allocate memory for factors
    factors = (int*)malloc(count * sizeof(int));
    
    if(factors == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Second pass: store factors
    int index = 0;
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            factors[index++] = i;
        }
    }
    
    printf("Factors of %d are: ", num);
    for(i = 0; i < count; i++) {
        printf("%d ", factors[i]);
    }
    
    free(factors);
    return 0;
}