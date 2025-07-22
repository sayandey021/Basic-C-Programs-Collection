/*Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include <stdio.h>

int main()
{
	int a=8,s=0,m=0;
	for(int i=1;i<=10;i++){
		m=a*i;
        printf("%d + %d = %d\n",m,s,s+m);
		s +=m;
	}
	printf("the sum of the numbers occurring in the multiplication table of 8 is:%d.",s);
}