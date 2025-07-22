// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
//sum(n) = 1+2+3+4+5+.....+(n-1)+n
//sum(n) = sum(n-1) + n
#include<stdio.h>

int sum_natural(int n);

int sum_natural(int n){
    if (n == 0) {
        return 0;
    }
    return n + sum_natural(n - 1);
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of natural numbers are: %d", sum_natural(n));
    return 0;
}