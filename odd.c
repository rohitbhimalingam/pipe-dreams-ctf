#include <stdio.h>

int main(void)
{
int A, b;
printf("enter number:");
scanf("%d", &A);
b = A % 2;
if (b == 0)
printf("given number is even");
 else
 printf("given number is odd");
}
