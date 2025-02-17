//Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main() {
    int n=1,i=1;
	do{
		n = n * i;
		i++;
	}while(i<=10);
	printf("10!=%d",n);
    return 0;
}

