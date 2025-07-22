#include <stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // ans is - 6 6 4 because the order of evaluation is not defined so it can be ++a or a++ first
    //4 5 5 are also true
    return 0;
}