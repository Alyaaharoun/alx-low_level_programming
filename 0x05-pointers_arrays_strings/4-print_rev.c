#include "main.h"

/**
 * print_rev - function that printstring reverse
 * 
 * @s: parameter of function
 * 
 * Return: no return
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[0])
	{
		i++;
	}
	while(i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
