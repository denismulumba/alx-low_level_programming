#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Retunr: void
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
