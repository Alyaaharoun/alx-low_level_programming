#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print string
 * @name: first parameter
 * @f: function to apointer
 * Return: no return
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
