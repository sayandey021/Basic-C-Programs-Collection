#include <stdio.h>

int main() {
    int marks;
    char grade;
    int valid = 1; // Variable to check validity of marks
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        grade = 'A';
    else if (marks >= 80 && marks < 90)
        grade = 'B';
    else if (marks >= 70 && marks < 80)
        grade = 'C';
    else if (marks >= 60 && marks < 70)
        grade = 'D';
    else if (marks >= 50 && marks < 60)
        grade = 'E';
    else if (marks >= 0 && marks < 50)
        grade = 'F';
    else {
        printf("Invalid marks\n");
        valid = 0; // Marks are invalid
    }

    if (valid) {
        printf("Your grade is: %c\n", grade);
    }
    return 0;
}
