#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
    int divisor = 1;

    /* Handle negative numbers */
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* Determine the divisor to use for the left-most digit */
    while (n / divisor > 9)
        divisor *= 10;

    /* Print each digit */
    while (divisor != 0)
    {
        _putchar('0' + n / divisor);
        n %= divisor;
        divisor /= 10;
    }
}
