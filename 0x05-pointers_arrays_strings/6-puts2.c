#include "main.h"

/**
 * puts2 - function to print oter character
 *
 * @str: parameter of function
 *
 * Return: no return
*/

void puts2(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
