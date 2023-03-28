#include "main.h"

/**
 * _puts - prints a strinh to a stdout, followed by a new line
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
