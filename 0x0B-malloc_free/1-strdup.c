#include "main.h"

/**
 * _strdup - function to return string
 * @str: parameter of function
 * Return: always 0(success)
*/

char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

if (str == NULL)
{
	return (NULL);
}
while (str[len] != '\0')
{
	len++;
}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
