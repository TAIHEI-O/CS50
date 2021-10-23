#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int letter = 0;
int word = 0;
int sentence = 0;


int main(void)
{
    // Get the text from user
    string text = get_string("Text: ");

    // Set the length of text
    int n = strlen(text);

    // Count words
    for (int i = 0; i < n + 1; i++)
    {
        // Count letters
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letter++;
        }

        // Count words
        if (text[i] == ' ' || text[i] == '\0')
        {
            word++;
        }

        // Count sentences
        if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentence++;
        }

    }

    // Calculate Coleman-Liau index
    int grade = round(0.0588 * (100 * (float) letter / (float) word) - 0.296 * (100 * (float) sentence / (float) word) - 15.8);

    // Print grade
    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }

    return 0;
}

