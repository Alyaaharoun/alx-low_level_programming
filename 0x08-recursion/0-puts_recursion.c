#include "main.h"

/**
 * _puts_recursion - function that print string
 *
 * @s: parameter of function
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
