#include <stdio.h>

int main(){

    
    //for integer
    int i = 72;
    int *j = &i;  
    printf("The address of i is %p\n", j);//%p is for pointer
    printf("The address of i is %u\n", &i);//%u is for unsigned intS
    printf("The address of j is %p\n", &j);

    printf("The value at address j is %d\n", *(&i));// or *j is same


    //for float
    float f = 3.14;
    float *f1 = &f;
    printf("\nThe address of f is %p\n", &f);//address of f
    printf("The address of f1 is %p\n", &f1);//address of pointer f1
    printf("The value at address f1 is %.2f\n", *f1);//value at address f1


    //for char
    char c = 'A';
    char *c1 = &c;
    printf("\nThe address of c is %p\n", &c);//address of c
    printf("The address of c1 is %p\n", &c1);//address of pointer c1
    printf("The value at address c1 is %c\n", *c1);//value at address c1
 
    return 0;
}