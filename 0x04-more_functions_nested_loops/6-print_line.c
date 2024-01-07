#include "main.h"

/**
 * print_line - function print line
 *
 * @n: parameter of function
 *
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
