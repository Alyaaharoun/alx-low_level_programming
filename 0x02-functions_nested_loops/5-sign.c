#include "main.h"

/**
 * print_sign - is afunction that print the sign of anumber
 *
 * @n: is aparameter wich contain number
 *
 * Return: it return 0 when number = 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
