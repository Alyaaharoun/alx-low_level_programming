#include "main.h"

/**
 * _abs - function tht print the bsolute of integer
 *
 * @n: parameter of function
 *
 * Return: always 0 (success)
 *
 */

int _abs(int n)
{
	int i;

	i = n * -1;

	if (n > 0)
		_putchar(n);
	else if (n == 0)
		_putchar('0');
	else if (n < 0)
		_putchar(i);
	return (0);
}
