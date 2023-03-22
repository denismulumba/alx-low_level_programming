#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 1, n2 = 2, n3, count = 2;

	printf("%d, %d, ", n1, n2);

	while (count < 50)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
		count++;
	}
	n3 = n1 + n2;
	print("%d\n", n3);
	return (0);
}
