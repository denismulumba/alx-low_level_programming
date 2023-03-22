#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints then times table, starting with 0
 *
 * @n: is the number
 * Return: the multiplication table
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (j == 0)
				printf("%d", r);
			else
				printf(", %3d", r);
		}
		printf("\n");
	}
}
