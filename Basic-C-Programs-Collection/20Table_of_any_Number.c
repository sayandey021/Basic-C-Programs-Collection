// Write a program to print multiplication table of a given number n
#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number: ");
	scanf("%d",&n);
	printf("The multiplication table of %d is:\n", n);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n", n, i, n*i);
	}
    return 0;
}