#include <stdio.h>
int main(void)
{
    int a;
    printf("enter a number:");
    scanf(" %d", &a);

    if (a%2==0) {
        printf("%d is even. \n", a);
    }
    else {
        printf("%d is odd.\n", a);
    }

}

