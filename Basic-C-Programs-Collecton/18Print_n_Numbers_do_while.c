#include <stdio.h>

int main() {
    int a, i=1;
    printf("Enter your number: ");
    scanf("%d",&a);
    do{
      printf("%d\n",i);
      i++;
    }while(i<=a);
    return 0;
}