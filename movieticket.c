#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isStudent = true;
    bool isSenior = false;
    double price = 10.0;

    // student = $9
    // senior = $8
    // student + senior = $7
    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10%\n");
            printf("You get a senior discount of 20%\n");
            price *= 0.7;
        }
        else{
            printf("You get a student discount of 10%\n");
            price *= 0.9;
        }
    }

    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}
