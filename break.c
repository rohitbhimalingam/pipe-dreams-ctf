#include <stdio.h>
int main(void)
{
    int i;
    for(i=1; i<=10; i++)
    {
        if (i == 4){
            break;
        }
        printf("%d\n", i);
    }
}
