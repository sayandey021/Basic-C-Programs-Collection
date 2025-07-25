// Write a program to find the number of bytes used by different data types in C.

#include <stdio.h>

int main() {
    
    int i = 0;
    int* ptr = &i;
    
    float f= 0.0f;
    float* fptr = &f;
    
    char c = 'a';
    char* cptr = &c;

    double d;
    double* dptr = &d;

    printf("Current address of int: %d\n", ptr);
    ptr++;
    printf("Next address of i: %d\n", ptr); // It shows the next address of i, which is 4 bytes away on a typical system.
    
    printf("Current address of float: %d\n", fptr);
    fptr++;
    printf("Next address of f: %d\n", fptr); // It shows the next address of f, which is 4 bytes away on a typical system.

    printf("Current address of char: %d\n", cptr);
    cptr++;
    printf("Next address of c: %d\n", cptr); // It shows the next address of c, which is 1 byte away on a typical system.

    printf("Current address of double: %d\n", dptr);
    dptr++; 
    printf("Next address of d: %d\n", dptr); // It shows the next address of d, which is 8 bytes away on a typical system.
}