#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    char name[] = "Gabriel";
    char avg_grade = 'A';
    int age = 21;
    float gpa = 3.5;

    printf("Hello! My name is %s and I am %d years old.\n", name, age);
    printf("My average grade is %c and my GPA is %f.\n", avg_grade, gpa);

    return 0;
}