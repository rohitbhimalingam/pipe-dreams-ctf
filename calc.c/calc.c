#include <stdio.h>

int main(void)
{
    int a, b;
    char c;

    printf("enter first number:\n");
    scanf("%d", &a);
    printf("enter second number: \n");
    scanf("%d", &b);
    printf("Enter operator: \n");
    scanf(" %c", &c);

    if (c =='+')
    {printf("%d \n", a+b);}
    else if (c == '-')
        {printf("%d \n", a-b);}
     else if (c == '*')
        {printf("%d \n", a*b);}
     else if (c == '/')
        {printf("%d \n", a/b);}
     else
     {printf("invalid operator");}

}
