#include "main.h"

/**
 * _strchr - function to cut the string
 * @s: first parameter
 * @c: second parameter
 * Return: value of s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
