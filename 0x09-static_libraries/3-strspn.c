#include "main.h"

/**
 * _strspn - function to get length
 * @s: first parameter
 * @accept: second parameter
 * Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}
