#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    (a - b) > 5 ? printf("Yes\n") : printf("No\n");
    return 0;
}
