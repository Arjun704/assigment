#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;
    
    printf("Thousands: %d\n", thousands);
    printf("Hundreds: %d\n", hundreds);
    printf("Tens: %d\n", tens);
    printf("Ones: %d\n", ones);
    
    return 0;
}
