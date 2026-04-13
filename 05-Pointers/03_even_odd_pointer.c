#include <stdio.h>

int main() {
    int num, *ptr;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    ptr = &num;
    
    if(*ptr % 2 == 0) {
        printf("%d is even\n", *ptr);
    } else {
        printf("%d is odd\n", *ptr);
    }
    
    return 0;
}