#include "main.h"

/**
 * *_strncat - function to print number of character to another
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest value
*/

char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	while (dest[destl] != '\0')
	{
		destl++;
	}
	while (src[srcl] != '\0')
	{
		srcl++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destl + i] = src[i];
	}
	dest[destl + i] = '\0';
	return (dest);
}
