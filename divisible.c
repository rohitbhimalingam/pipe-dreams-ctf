#include <stdio.h>
int main(void)
{
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    a%b==0 ? printf("yes, %d divides %d\n", b, a) : printf("no, %d does not divide %d\n", b, a);

}

