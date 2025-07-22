//Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

int multiply(int *j){
	return (*j*30);
}
	
int main(){
	int a = 45;
	int *j = &a;
    printf("The value of a is %d.\n", *j);
	printf("The value of a is %d.\n", multiply(j));
    return 0;
}
	