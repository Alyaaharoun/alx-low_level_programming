#include "main.h"

/**
 * _strpbrk - function to search in string
 * @s: first parameter
 * @accept: second parameter
 * Return: value of s
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
