#include "main.h"

/**
 * create_array - function to create array
 * @size: first parameter
 * @c: second parameter
 * Return: always 0 (success)
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	unsigned int i;
	char *ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
