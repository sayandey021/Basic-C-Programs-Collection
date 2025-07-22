//Write a program to print the address of a variable. Use this address to get the value of the variable.

#include<stdio.h>

int main(){
	int v=10;
	int *a = &v;
	printf("address of a is %p.\n",&v);
	printf("value of a is %d.",*a);
	return 0;
}