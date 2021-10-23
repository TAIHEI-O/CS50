#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if there 2 arguments
    if (argc != 2)
    {
        // Print error
        printf("Usage: ./caesar key\n");

        return 1;
    }

    else
    {
        // Check if the 2nd argument contains digits
        string key = argv[1];

        for (int i = 0; i < strlen(key); i++)
        {
            if (isdigit(key[i]) == 0)
            {
                // Print error
                printf("Usage: ./caesar key\n");

                return 1;
            }
        }

        int mykey = atoi(key);

        // Get plaintext from user
        string plaintext = get_string("Plaintext: ");

        // Convert to ciphertext
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (isupper(plaintext[i]))
            {
                plaintext[i] = (plaintext[i] - 65);
                plaintext[i] = (plaintext[i] + mykey) % 26;
                plaintext[i] = (plaintext[i] + 65);
            }

            if (islower(plaintext[i]))
            {
                plaintext[i] = (plaintext[i] - 97);
                plaintext[i] = (plaintext[i] + mykey) % 26;
                plaintext[i] = (plaintext[i] + 97);
            }

            if (isalpha(plaintext[i]) == 0)
            {
                plaintext[i] = plaintext[i];
            }
        }

        // Print ciphertext
        printf("Ciphertext: %s\n", plaintext);

    }
}