#include "main.h"

/**
 * times_table - function print the table of nine
 *
 * Return: always return 0 (success)
 */

void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = (i * j);
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
