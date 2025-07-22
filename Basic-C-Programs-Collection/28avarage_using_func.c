//Write a program using function to find average of three numbers.
#include<stdio.h>

int avarage(int a,int b,int c);

int avarage(int a,int b,int c){
	int avg;
	avg = (a+b+c)/3;
	return avg;
}

int main()
{
	int ans = avarage(2,3,4);
	printf("Avarage of the three number is: %d",ans);
}