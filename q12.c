#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    int digit1 = num / 10000;
    int digit3 = (num % 1000) / 100;
    int digit5 = num % 10;
    
    int sum = digit1 + digit3 + digit5;
    int diff = digit1 - digit3 - digit5;
    
    printf("Sum of 1st, 3rd, and 5th digits: %d\n", sum);
    printf("Difference of 1st, 3rd, and 5th digits: %d\n", diff);
    
    return 0;
}
