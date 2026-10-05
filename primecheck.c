
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i, n;
    bool flag = false;

    printf("enter a positive integer number: \n");
    scanf("%d", &n); // the number being tested. Example: 20189

    if (n == 1) {
       printf("n is neither PRIME nor COMPOSITE");
       return 0;
    }

    if (n == 2) {
       printf("n is PRIME");
       return 0;
    }
    // main check starts here
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) {
            flag = true;
            printf("n is COMPOSITE and %d is a factor", i);
            break;
        }
    }

    if (flag == false)
       printf("n is PRIME"); // if it is prime

    return 0;
}
