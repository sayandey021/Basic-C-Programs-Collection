/*Simple interest is calculated with the following formula: 
S.I. = (P × R × T)/100, where P = Principal, R = Rate of Interest in % per annum, 
and T = Time, usually calculated as the number of years.*/

#include <stdio.h>

int main() {
    float p, t, r;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the time period: ");
    scanf("%f",&t);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("The simple interest is: %f", (p*t*r)/100);
    return 0;
}