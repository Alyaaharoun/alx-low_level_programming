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
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			r = i * j;

			_putchar(',');
			_putchar(' ');

			if (r < 10)
				_putchar(' ');
			else
				_putchar((r / 10) + 48);
				 _putchar((r % 10) + 48);
		}
		_putchar('\n');
	}
}
