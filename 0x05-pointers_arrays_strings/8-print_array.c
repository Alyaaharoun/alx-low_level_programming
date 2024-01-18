#include "main.h"

/**
 * print_array - function to print array
 *
 * @a: first parameter of function
 *
 * @n: second parameter of function
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
