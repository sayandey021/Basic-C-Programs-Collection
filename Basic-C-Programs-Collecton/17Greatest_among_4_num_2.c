#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Taking input from the user
    printf("Enter four numbers:\n ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Assuming 'a' is the maximum initially
    max = a;

    // Comparing with other numbers
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    // Display the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}
