#include <stdio.h>

#include "intro.h"

int introPrint()
{
    printf("Hello World!\n");

    // comments are just like js
    // one liner

    /*
     * multi
     * liner
     */

    char name[] = "Gabriel";
    char avg_grade = 'A';
    int age = 21;
    float gpa = 3.5;

    printf("Hello! My name is %s and I am %d years old.\n", name, age);
    printf("My average grade is %c and my GPA is %0..1f.\n", avg_grade, gpa);

    return 0;
}