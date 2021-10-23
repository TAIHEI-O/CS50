#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Get dollars from user
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);


    // Unit conversion
    int cents = round(dollars * 100);


    // Calculate number of coins
    int coins = 0;
    while (cents > 24)
    {
        cents = cents - 25;
        coins++;
    }

    while (cents > 9)
    {
        cents = cents - 10;
        coins++;
    }

    while (cents > 4)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents > 0)
    {
        cents = cents - 1;
        coins++;
    }


    // Print number of coins
    printf("%i\n", coins);
}