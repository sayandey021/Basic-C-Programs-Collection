#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Enter a side of the squre: ");
	scanf("%d",&a);
    
	printf("The area of the squre is: %.2f.\n",pow(a,2));

    return 0;
}