#include <stdio.h>

int main() {
    int marks;

    // Input from user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check valid input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter between 0 and 100.");
    }
    else {
        // Pass or Fail
        if (marks >= 50) {
            printf("Result: PASS\n");

            // Grade system
            if (marks >= 90) {
                printf("Grade: A+\n");
            }
            else if (marks >= 75) {
                printf("Grade: A\n");
            }
            else if (marks >= 60) {
                printf("Grade: B\n");
            }
            else {
                printf("Grade: C\n");
            }
        }
        else {
            printf("Result: FAIL\n");
        }
    }

    // Loop example (just for practice)
    printf("\nPrinting numbers from 1 to 5:\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}