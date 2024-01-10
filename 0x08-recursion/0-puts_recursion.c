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
	if ( *s == \0)
	{
		return;
	}
	_puts_recursion(*s);
	_putchar('\n');
}
