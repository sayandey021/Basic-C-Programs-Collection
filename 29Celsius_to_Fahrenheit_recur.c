//Write a function to convert Celsius temperature into Fahrenheit
#include <stdio.h>

int temp(int c);

int temp(int c){
	return (c*(9/5)+32);
}

int main()
{
	int f;
	printf("Enter the temperature in Celsius: ");
	scanf("%d",&f);
	int temprature = temp(f);
	printf("The temperature in Fahrenheit is: %d\n",temprature);
	return 0;
}