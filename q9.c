#include <stdio.h>

int main() {
    int x = 5, y = 3;
    
    printf("(x > y) && (x < 10) is evaluated to %d\n", (x > y) && (x < 10));
    printf("(x > y) || (y < 1) is evaluated to %d\n", (x > y) || (y < 1));
    printf("!(x == y) is evaluated to %d\n", !(x == y));
    
    return 0;
}
