#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age >= 18)
        printf("You are a Adult.");
    else
        printf("you are a Kid.");
    
    return 0;
}