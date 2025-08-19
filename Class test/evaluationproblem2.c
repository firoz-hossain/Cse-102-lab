#include <stdio.h>

int main() {
    float balance, product_cost, money_from_brother, remaining;
    printf("Enter your balance: ");
    scanf("%f", &balance);

    printf("Enter product cost: ");
    scanf("%f", &product_cost);

    printf("Enter money from brother: ");
    scanf("%f", &money_from_brother);
    remaining = balance - product_cost + money_from_brother;
    printf("Your remaining balance is\n: %.2f tk\n", remaining);

    return 0;
}
