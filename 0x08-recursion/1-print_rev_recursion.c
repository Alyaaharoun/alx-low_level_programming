#include "main.h"

/**
 * _print_rev_recursion - function that print reverse string
 *
 * @s: parameter of function
 *
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
