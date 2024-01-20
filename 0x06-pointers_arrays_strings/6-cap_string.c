#include "main.h"

/**
 * cap_string - function to capitalize
 * @s: first parameter
 * Return: return s value
*/

char *cap_string(char *s)
{
	int i, j;
	char sp[13] = {' ', '\n', '\t', ',', ';',
	'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sp[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
