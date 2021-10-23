#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get name from user
    string answer = get_string("What's your name?\n ");
    printf("hello, %s\n", answer);
}