#include <stdio.h>
int main(void)
{
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("AND = %b \n", a & b);
    printf("OR = %b \n", a | b);
}
