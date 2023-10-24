// #include <stdio.h>
// #include <string.h>

// int main() {
//     char password[] = "1234";  // Predefined password

//     char inputPassword[20];  // To store user input
//     printf("Enter the password: ");
//     scanf("%s", inputPassword);

//     // Check if the input password matches the predefined password
//     if (strcmp(inputPassword, password) == 0) {
//         printf("Password is correct. Access granted.\n");
//     } else {
//         printf("Incorrect password. Access denied.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// #define PI 3.14159265359

// int main() {
//     double radius, height, volume;

//     printf("Enter the radius of the cylinder: ");
//     scanf("%lf", &radius);

//     printf("Enter the height of the cylinder: ");
//     scanf("%lf", &height);

//     // Calculate the volume of the cylinder
//     volume = PI * pow(radius, 2) * height;

//     printf("Volume of the cylinder: %.2lf\n", volume);

//     return 0;
// }
#include <stdio.h>

int main() {
    int assignmentMarks;
    const int passMark = 50;

    printf("Enter the student's assignment marks: ");
    scanf("%d", &assignmentMarks);

    if (assignmentMarks >= passMark) {
        printf("Student has PASSED the test.\n");
    } else {
        printf("Student has FAILED the test.\n");
    }

    return 0;
}