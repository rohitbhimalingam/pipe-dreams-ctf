#include <stdio.h>

int main(void)
{
    int a, b;

    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    float c;
    c = (float) a / b;
    printf("result: %f\n", c);
}
