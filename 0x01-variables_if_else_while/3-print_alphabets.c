#include <stdio.h>
/** 
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo, upp;

	for (lo = 'a'; lo <= 'z'; lo++)
		putchar(lo);

	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);

	putchar('\n');

	return (0);
}
