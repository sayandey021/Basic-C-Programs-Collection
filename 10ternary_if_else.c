#include <stdio.h>

int main() {
    int a, b;
    // condition ? expression-if-true : expression-if-false
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    (a > b) ? printf("%d is greater than %d\n", a, b) : printf("%d is greater than %d\n", b, a);
    return 0;
}