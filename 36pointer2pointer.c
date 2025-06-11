#include <stdio.h>

int main(){
    int i = 10;
    int *j = &i;
    int **k = &j; 

    printf("address of i = %p\n", j);  // address of i
    printf("address of j = %p\n", k);   // address of j
    printf("address of k = %p\n", &k);    // value of k

    printf("value of i = %d\n", i);  // value of i
    printf("value of j = %d\n", *j);  // actually value of i
    printf("value of k = %p\n", *k);  // address of i
    printf("value of i = %d\n", **k);  // actually value of i
}