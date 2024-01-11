#include "main.h"

/**
 * _strlen_recursion - function print the length
 *
 * @s: parameter of function
 *
 * Return: always return 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (strlen(*s));
	}
	else
	{
		return (strlen(s + 1));
	}
}
