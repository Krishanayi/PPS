#include <stdio.h>

int main() 
{
    int item, quantity;
    float price, amount, discount, total;

    printf("1. Chocolate = 50 Rs\n");
    printf("2. Clothes = 1000 Rs\n");
    printf("3. Shoes = 1500 Rs\n");
    printf("4. Makeup = 800 Rs\n");

    printf("\nSelect item (1-4): ");
    scanf("%d", &item);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (item == 1)
        price = 50;
    else if (item == 2)
        price = 1000;
    else if (item == 3)
        price = 1500;
    else if (item == 4)
        price = 800;
    else 
    {
        printf("Wrong item selected");
        return 0;
    }

    amount = price * quantity;
    discount = 0;

    if (amount >= 1001 && amount <= 10000)
        discount = amount * 5 / 100;
    else if (amount <= 15000)
        discount = amount * 7 / 100;
    else if (amount <= 20000)
        discount = amount * 9 / 100;
    else if (amount > 20000)
        discount = amount * 12 / 100;

    total = amount - discount;

    printf("\nAmount = %.2f", amount);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal bill = %.2f", total);

    return 0;
}
