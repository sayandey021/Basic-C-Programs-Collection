#include <stdio.h>

//call by refrance
int sum(int *a, int *b)
{
    *a = 6;
    return (*a + *b);
}


// call by value
/*int sum(int a, int b)
{
    a = 6;
    return a + b;
}*/


int main()
{
    int x = 2, y = 3;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}