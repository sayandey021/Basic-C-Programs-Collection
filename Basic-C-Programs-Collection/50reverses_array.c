//Write a program containing a function which reverses the array passed to it.

#include <stdio.h>


void printarray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int *arr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    printarray(arr, 5);
    reverse(arr, 5);
    printarray(arr, 5);
    return 0;
}