#include "main.h"

/**
 * print_diagonal - function that print diagonal
 *
 * @n: parameter of function
 *
 * Return: always 0(success)
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (s = 1; s <= i; s++)
				_putchar(' ');
			_putchr('92');
			_putchar('\n');
		}
	}
}
