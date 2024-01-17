#include "main.h"

/**
* print_rev - function print reverse string
* 
* @s: parameter of function
* 
* Return: no return
*/

void print_rev(char *s)
{

	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
