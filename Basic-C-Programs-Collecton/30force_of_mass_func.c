//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
//formula: F=m⋅g 

#include <stdio.h>

float force(float m);

float force(float m){
	float g = 9.8; 
	return m*g;
}

int main()
{
	float m;
	printf("Enter the mass of the body: ");
	scanf("%f",&m);
	printf("The force of attraction of the mass is: %.2f",force(m));
	return 0;
}