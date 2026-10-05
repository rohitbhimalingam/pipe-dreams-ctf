#include <stdio.h>
int main(void)
{
    int a, b, flag, c;

    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    flag = a == b ? 1 : 0;
    c = a < b ? a + b : a * b;

    printf("%d\n", flag);
    printf(" %d\n", c);

    return 0;
}
