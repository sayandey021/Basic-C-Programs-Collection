//Write a program using function to find average of three numbers.

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a + b + c) / 3.0; // Use 3.0 to ensure floating-point division
}

int main() {
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    float avg = average(a, b, c);
    printf("Average of the three numbers is: %.2f\n", avg); // Use %.2f to print two decimal places
    
    return 0;
}