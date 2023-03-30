#include <string.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to capitalize
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (i == 0 || strchr(separators, s[i - 1]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';
		}

		/* Check for consecutive separators */
		for (j = 0; separators[j]; j++)
		{
			if (s[i] == separators[j] && s[i + 1] == separators[j])
			{
				s[i] = ' ';
				break;
			}
		}
	}

	return (s);
}
