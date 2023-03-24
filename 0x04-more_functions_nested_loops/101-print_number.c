#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
    int divisor = 1;
    int digit;
    int is_negative = 0;

    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    /* Find the largest power of 10 that divides n */
    while (n / divisor > 9)
        divisor *= 10;

    /* Print digits */
    while (divisor != 0)
    {
        digit = n / divisor;
        _putchar('0' + digit);
        n %= divisor;
        divisor /= 10;
    }

    /* Print '-' for negative numbers */
    if (is_negative)
        _putchar('-');
}
