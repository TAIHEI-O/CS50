#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get hight from user
    int hight;
    do
    {
        hight = get_int("Hight: ");
    }
    while (hight < 1 || hight > 8);

    // Print out blocks
    for (int i = 0; i < hight; i++)
    {
        for (int o = hight - 1; o > i; o--)
        {
            // Print space
            printf(" ");
        }
        for (int j = -1; j < i; j++)
        {
            // Print hashtag
            printf("#");
        }
        //Print a new line
        printf("\n");
    }
}