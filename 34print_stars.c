#include<stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++){
        //this loop runs from 0 to 2
        //if i = 0, then print 1 *
        //if i = 1, then print 2 *'s
        //if i = 2, then print 3 *'s
        
        for (int j = 0; j<2*i+1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}