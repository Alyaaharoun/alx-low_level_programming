#include "main.h"

/**
 * print_diagonal - function that print diagonal
 *
 * @n: parameter of function
 *
 * Return: no return
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
			_putchar(92);
			_putchar('\n');
		}
	}
}
