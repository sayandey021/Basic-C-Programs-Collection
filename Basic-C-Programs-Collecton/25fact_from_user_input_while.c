#include <stdio.h>

int main()
{
	int a,f=1,i=1;
	printf("Enter your number:");
	scanf("%d",&a);
	while(i<=a){
		f *=i;
		i++;
	}
	printf("The factorial is: %d.",f);
}