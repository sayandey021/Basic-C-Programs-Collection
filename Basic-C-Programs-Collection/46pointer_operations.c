 /*  Following operations can be performed on a pointer:
    1. Addition of a number to a pointer.
    2. Subtraction of a number from a pointer.
    3. Subtraction of one pointer from another.
    4. Comparison of two pointer variables. 
*/ 
 

 #include <stdio.h>
 
 int main() {
        int a = 10, b = 20;
        int *p1 = &a, *p2 = &b;

        printf("addition of a = %d and b = %d is %d.\n", a, b, *p1 + *p2);
        printf("subtraction of b = %d and a = %d is %d.\n", b, a, *p2 - *p1);
        printf("subtraction of pointer p2 and p1 is %d.\n", *p2 - *p1); // This gives the difference in values pointed to by p2 and p1
        printf("comparison of pointer p1 and p2 is %d.\n", p1 == p2);  // 0 means not equal, 1 means equal
     return 0;
 }