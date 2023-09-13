#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    int digit1 = num / 10000;
    int digit2 = (num % 10000) / 1000;
    int digit3 = (num % 1000) / 100;
    int digit4 = (num % 100) / 10;
    int digit5 = num % 10;
    
    int sum = digit1 + digit2 + digit3 + digit4 + digit5;
    int diff = digit1 - digit2 - digit3 - digit4 - digit5;
    
    printf("Sum of all digits: %d\n", sum);
    printf("Difference of all digits: %d\n", diff);
    
    return 0;
}
