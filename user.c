#include <stdio.h>

int main () {

    char name[20];
    int age;
    double gpa;
    printf("Enter your name: ");
    fgets("%s", 20, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your name is %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your GPA is %f\n", gpa);

    return 0;
}