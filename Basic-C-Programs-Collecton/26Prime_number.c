#include <stdio.h>

int main()
{
	int n,p=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n==1 || n==0){
		p = 1;
	}
	else{
		for (int i=2;i<n;i++){
			if(n%i == 0){
				p = 1;
				break;
			}
		}
	}
	if(p){
		printf ("%d is not a prime number.",n);
	}
	else{
		printf ("%d is a prime number.",n);
	}
	return 0;
}