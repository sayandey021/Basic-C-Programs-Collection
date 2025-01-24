/* calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
area of circle = 3.14 * radius * radius , volume off cylinder = area * height */

#include <stdio.h>

int main() {
    int r, h;
    float area, pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the height of cylinder: ");
    scanf("%d", &h);
    area = pi * r * r;
    printf("The area of the circle with redius %d is: %f\n", r, area); 
    printf("The volume of the cylinder with radius %d and height %d is: %f\n", r, h, (area * h) );
    return 0;
}