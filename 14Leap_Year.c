#include <stdio.h>

int main() {
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("This is a leap Year.\n");
        }
    else
        {
            printf("This is not a lear year.\n");
        }
    return 0;
}