//Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
//yes, the addresses are same because the address of the variable is passed to the function and the address of the variable is stored in the pointer variable. So, the address of the variable and the address of the pointer variable are same.


#include <stdio.h>

int returning_5(int *ptr){
    printf( "The value of ptr is %d\n", ptr);
    printf( "The value at ptr is %d\n", *ptr);
    return 5;
}

int main(){
    int i = 10;
    int *ptr = &i;
    printf( "The address of i is %u\n", &i);
    returning_5(ptr);

    return 0;
}