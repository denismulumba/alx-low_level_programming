#include <stdio.h>
/**
 * main - Entry values
 *
 * Return; Always 0 (Success)
 */
int main(void)
{
	int n1 = 1, n2 = 2, n3, sum = 2;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%d\n", sum);
	return (0);
}
