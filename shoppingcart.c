#include <stdio.h>
int main(void)
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0;

    printf("what item would you like to buy: ");
    scanf("%49s", item);
    printf("what is the price of each item: ");
    scanf("%f", &price);
    printf("how many would you like: ");
    scanf("%d", &quantity);
    (total = price * quantity);

    if (quantity > 0)
    {
        printf("You have bought %d %ss\n", quantity, item);
    }
    else
    {
        printf("you have bought %d%s \n", quantity, item);
    }
    printf("Total: %c%.2f\n", currency, total);

}
