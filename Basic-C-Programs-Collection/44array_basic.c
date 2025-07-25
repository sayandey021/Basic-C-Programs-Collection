// Basic array functionalties program in C

#include <stdio.h>

int main() {

    int marks[5]; //0 - 2 elements

    /*
        char name[20]; //0 - 19 elements
        float scores[5]; //0 - 4 elements
        int arr[5] = {10, 20, 30, 40}; // Another way to declare an array
        int arr[] = {10, 20, 30, 40}; // Another way to declare an array
    */

    // Initializing array elements

    /*  marks[0] = 90;
        marks[1] = 85;
        marks[2] = 95;  
    */

    for (int i=0; i<5; i++) // Loop to get input for marks
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    } 

    // Displaying array elements
    
    for (int i=0; i<5; i++) // Loop to display marks
    {
        printf("Marks of the %d students are: %d \n", i , marks[i]);
        printf("The address of marks index %d students are: %u \n", i , &marks[i]); 
        // Displaying address of each element & continuous addresses
    } 
    return 0;
}