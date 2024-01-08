#include "main.h"

/**
 * _puts - function tht print string
 *
 * @str: parameter of function
 *
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
