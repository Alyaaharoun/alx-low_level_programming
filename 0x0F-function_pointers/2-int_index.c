#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to interinteger
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: always 0(success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && cmp && size)
{
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
}
return (-1);
}
