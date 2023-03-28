#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, len;

	/* find the length of the string */
	len = 0;
	while (*(s + len) != '\0')
		len++;

	/* print the string in reverse */
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	/* print a new line */
	_putchar('\n');
}
