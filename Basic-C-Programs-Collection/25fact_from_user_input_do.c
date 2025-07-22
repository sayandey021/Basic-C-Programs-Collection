
#include <stdio.h>

int main()
{
	int a,f=1,i=1;
	printf("Enter your number:");
	scanf("%d",&a);
	do{
		f *=i;
		i++;
	}while(i<=a);
	printf("The factorial is: %d.",f);
}