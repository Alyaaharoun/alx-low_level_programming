#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function to print array
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL && size != '\0')
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
