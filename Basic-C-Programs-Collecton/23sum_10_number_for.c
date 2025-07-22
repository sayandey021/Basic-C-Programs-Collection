//Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main()
{   
    int a=0;
	for(int i=1;i<=10;i++){
		a=a+i;
	}
	printf("The Sum of First 10 Number is:%d",a);
	return 0;
}
