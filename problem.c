#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    bool flag;

    a = 10; b = 5;

    // arithmetic operations
    a = a + b;
    printf("a is: %d\n", a);
    a += 6;
    printf("a is: %d\n", a);
    a /= 7;
    printf("a is: %d\n", a);
    a--;
    printf("a is: %d\n", a);

    // logical operations
    flag = a > b || b / a;
    printf("flag is: %d\n", flag); 
    flag = a < b && a / b;
    printf("flag is: %d\n", flag);

    // bitwise operations
    c = a & b;
    printf("c is: %d\n", c);
    c = a | b;
    printf("c is: %d\n", c);

    return 0;
}
