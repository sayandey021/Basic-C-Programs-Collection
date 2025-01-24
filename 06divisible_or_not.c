#include <stdio.h>

int main() {
    int f,r;
    printf("Enter your number: ");
    scanf("%d", &f);
    r = f % 97;
    printf("The remainder is %d\n", r);
    if (r == 0)
        printf("The number is divisible by 97\n");
    else
        printf("The number is not divisible by 97\n");

}