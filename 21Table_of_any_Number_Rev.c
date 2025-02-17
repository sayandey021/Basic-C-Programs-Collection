// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number: ");
	scanf("%d",&n);
	printf("The multiplication table of %d in reverse is:\n", n);
	for(i=10;i;i--){
		printf("%d X %d = %d\n", n, i, n*i);
	}
    return 0;
}