#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password of a specified length
 *
 * Return: Always 0.
 */
int main(void)
{
    int counter = 0;
    srandom(time(NULL));  /* Correct seeding function for random() */
    char randChar;

    int passwordLength;

    printf("Type in a password length\n");
    scanf("%d", &passwordLength);

    while (counter < passwordLength)
    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random() % 62];
        printf("%c", randChar);
        counter++;
    }
    printf("\n"); /* Stops the output from being on the same line as the prompt */
    return 0;
}
