#include <stdio.h>

int main() {
    int n, num, i, largest, smallest;
    
    printf("How many numbers? ");
    scanf("%d", &n);
    
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;
    
    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if(num > largest) {
            largest = num;
        }
        if(num < smallest) {
            smallest = num;
        }
    }
    
    printf("Largest = %d", largest);
    if(largest % 2 == 0) {
        printf(" (even)\n");
    } else {
        printf(" (odd)\n");
    }
    
    printf("Smallest = %d", smallest);
    if(smallest % 2 == 0) {
        printf(" (even)\n");
    } else {
        printf(" (odd)\n");
    }
    
    return 0;
}