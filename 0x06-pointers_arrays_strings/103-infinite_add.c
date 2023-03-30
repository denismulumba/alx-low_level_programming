#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len_r = 0;
    int i = 0;
    int j = 0;
    int carry = 0;

    if (len1 + len2 > size_r)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    len_r = len1 > len2 ? len1 : len2;

    r[len_r] = '\0';

    while (i >= 0 || j >= 0)
    {
        int a = i >= 0 ? n1[i] - '0' : 0;
        int b = j >= 0 ? n2[j] - '0' : 0;
        int sum = a + b + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }

        len_r--;
        r[len_r] = sum + '0';

        i--;
        j--;
    }

    if (carry > 0)
    {
        len_r--;
        if (len_r < 0)
            return (0);
        r[len_r] = carry + '0';
    }

    if (len_r == 0)
        return (r);
    else
    {
        memmove(r, &r[len_r], strlen(&r[len_r]) + 1);
        return (r);
    }
}
