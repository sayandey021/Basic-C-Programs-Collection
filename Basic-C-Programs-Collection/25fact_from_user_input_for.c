/*Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include <stdio.h>

int main()
{
	int a,f=1;
	printf("Enter your number:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		f *=i;
	}
	printf("The factorial is: %d.",f);
}