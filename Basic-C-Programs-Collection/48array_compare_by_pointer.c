 /*
 Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
 to the third element where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = arr;
    
    printf("The address of the first element is %u for the value %d.\n", arr,*ptr);
    printf("The address of the third element is %u for the value %d.", (ptr+2),(*ptr+2));
    return 0;
}