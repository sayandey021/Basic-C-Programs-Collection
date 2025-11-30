// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int count(int arr[], int n) {
int positive = 0;
for(int i = 0; i < n; i++) 
    {
        if(arr[i] > 0) {
            positive++;
        }
    }
return positive;
}


int main() {
    int arr[] = {14,-22,35,-44,56,45,-63};
    printf(" The positive numbers in these array are: %d." ,count(arr,7));
    return 0;
}