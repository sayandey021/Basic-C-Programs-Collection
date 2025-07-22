// Swap 2 number without using 3rd variable
#include <stdio.h>

int main() {
    int a = 100,b = 93;
    
    a = a + b;  // a becomes 15 (5 + 10)
    b = a - b;  // b becomes 5 (15 - 10)
    a = a - b;  // a becomes 10 (15 - 5)

    printf("After swapping: \na = %d \nb = %d", a, b);
    return 0;
}