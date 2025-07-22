#include <stdio.h>
int main() {
    int n=1,i=1;
	while(i<=10){
		n = n * i;
		i++;
	}
	printf("10!=%d",n);
    return 0;
}