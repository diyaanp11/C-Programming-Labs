#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num;
    
    if(temp == 0) {
        count = 1;
    } else {
        while(temp != 0) {
            temp /= 10;
            count++;
        }
    }
    
    printf("Number of digits in %d = %d\n", num, count);
    
    return 0;
}