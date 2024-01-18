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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
