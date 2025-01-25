/* Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */

#include <stdio.h>

int main() {
    int m1, m2, m3;
    printf("Enter the marks 1,marks 2 and marks 3: \n");
    scanf("%d %d %d", &m1, &m2, &m3);
    printf("Your Marks are %d, %d and %d.\n", m1,m2,m3);
    if(m1<33 && m2<33 && m3<33)
        printf("You Faild due to low marks in idividual subject(s).");
    else if((m1+m2+m3)/3 < 40)
        printf("You Faild due to less total marks.");
    else
        printf("You Passed!");
    return 0;
}