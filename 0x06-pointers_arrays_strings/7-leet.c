#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
    char *s;
    int i, j;
    char leet[] = "aAeEoOtTlL";
    char code[] = "4433007711";

    s = str;
    for (i = 0; s[i]; i++)
    {
        for (j = 0; leet[j]; j++)
        {
            if (s[i] == leet[j])
            {
                s[i] = code[j];
            }
        }
    }

    return str;
}
