#include <stdio.h>

void happybirthday(char name[], int age)
{
    printf("happy birthay to you %s!, you are %d years old]\n", name, age);
}

int main()
{

    char name[] = "rohit";
    int age = 17;

    happybirthday(name, age);
    happybirthday(name, age);
    happybirthday(name, age);
}
