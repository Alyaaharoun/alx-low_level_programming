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
	int ln = 0;

	if (*s > '\0')
	{
		ln = ln + _strlen_recursion(s + 1) + 1;
	}
	else
	{
		return (ln);
	}
}
