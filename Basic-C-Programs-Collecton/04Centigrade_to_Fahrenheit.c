// formulla: Fahranheit = (9/5) * Celsius + 32

#include <stdio.h>
int main() {
    float c, f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = ((9.0/5.0) * c) + 32;
    printf("The temperature in Fahrenheit is: %f\n", f);
    return 0;
}