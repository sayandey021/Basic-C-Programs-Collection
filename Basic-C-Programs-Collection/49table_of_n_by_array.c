// Write a program to create an array of 10 integers and store multiplication table of 5 in it.


#include <stdio.h>
int main() {
    int n,arr[10];
    
    printf("Enter the number to create the multiplication table: ");
    scanf("%d", &n);

    for(int i = 0; i<10; i++) {
        arr[i] = n * (i+1);
    }
        
    printf("The multiplication table of %d is:\n", n);

    for(int i = 0; i<10; i++) {
        printf(" %d X %d = %d. \n",n ,(i+1),arr[i]);
    }

    return 0;
}