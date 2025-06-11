//Write a program using recursion to calculate nth element of Fibonacci series.
//0,1,1,2,3,5,8,13,21,34,55,…
//F(n)=F(n−1)+F(n−2)

#include<stdio.h>

int fibonacci(int n);

int fibonacci(int n){
	if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The %dth element of Fibonacci series is: %d",n,fibonacci(n));
	return 0;
}