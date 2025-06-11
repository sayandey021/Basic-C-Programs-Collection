//Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int sum(int a, int b){
	int sum = a + b;
	return sum;
}

int avg(float a, float b){
	float avg =(a + b)/2;
	return avg;
}	
	
	
int main(){
	float a = 5, b = 3;
	printf("The sum of %d and %d is: %d.\n", a,b,sum(a,b));
	printf("The avarage of %d and %d is: %.2f.\n", a,b,avg(a,b));
	return 0;
}
	