#include <stdio.h>

int main() {
    int n=1,i;
	for(i=1;i<=10;i++){
	    n = n * i;
    }
	printf("10!=%d",n);
    return 0;
}