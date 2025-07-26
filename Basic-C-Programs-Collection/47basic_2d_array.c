/* Create a 2-d array by taking input from the user. Write a display function to 
   print the content of this 2-d array on the screen.
*/

#include <stdio.h>

int main() {
    int matrix[2][3];

    for (int i = 0; i < 2; i++) {
      for ( int j = 0; j < 3; j++) {
        printf("Enter the [%d,%d] 2D array elements are: ",i,j);
        scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("The elements of the array is %d \n", matrix[i][j]);
        }
    }

    return 0; 
}