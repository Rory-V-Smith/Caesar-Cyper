#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    // Check if program was run with one command-line argument
    if(argc != 2)
    {
        printf("Invalid command-line argument\n");
        return 1;
    }
    // iterate over provided argument to ensure all chars are digits
    else if(argv[1])
    { 
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Key must have digits only\n");
                return 1;
            }
        }
    }

    // Store key value as int
    int k = atoi(argv[1]);

    // prompt user for plaintext
    string plaintext = get_string("Plaintext: ");

    // iterate over each character of the plaintext
    int textlength = strlen(plaintext);
    int index = 0;
    char ciphertext[strlen(plaintext)];
    char c = ' ';
    for (int i = 0; i < textlength; i++)
    {
        if (isupper(plaintext[i]) != 0)
        {
            index = plaintext[i] - 65;
            c = ((index + k) % 26);
            ciphertext[i] = c + 65;
        }
        else if (islower(plaintext[i]) != 0)
        {
            index = plaintext[i] - 97;
            c = ((index + k) % 26);
           ciphertext[i] = c + 97;
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}