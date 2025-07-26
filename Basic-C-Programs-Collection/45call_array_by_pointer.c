#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40}; // Initializing an array with values
    int *ptr = arr; // same as int *ptr = &arr[0]; // Pointer to the first element of the array

    for (int i=0;i <4; i++) {
        
        // printf("Value at index %d is: %d \n", i, arr[i]); // typical method to displaying array elements

        printf("Address of index %d is: %u \n", i, *ptr); // Displaying array element using pointer
        ptr++; // Move the pointer to the next element
    }
    return 0;
}