#include "main.h"

/**
 * malloc_checked - function to check
 * @b: parameter of function
 * Return: no return
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
