#include "main.h"

/**
 * puts_half - function that print half number
 *
 * @str: parameter of function
 *
 * Return: no return
*/

void puts_half(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if ((l - 1) % 2 == 0)
	{
		for (i = (l - 1) / 2; i < l - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	if ((l - 1) % 2 != 0)
	{
		int n = (l) / 2;

		for (i = n; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
