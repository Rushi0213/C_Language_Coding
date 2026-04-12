#include <stdio.h>

int main() {
    char name[50];
    char email[50];
    char mobile[15];
    char gender[10];
    char course[20];

    // Input
    printf("Enter Full Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("Enter Mobile Number: ");
    scanf("%s", mobile);

    printf("Enter Gender (Male/Female): ");
    scanf("%s", gender);

    printf("Enter Course: ");
    scanf("%s", course);

    // Output
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Mobile: %s\n", mobile);
    printf("Gender: %s\n", gender);
    printf("Course: %s\n", course);

    return 0;
}