#include "main.h"

/**
 * *_strcat - function that bend string together
 *
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: is the dest value
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int destl = 0;
	int srcl = 0;

	while (src[srcl] != '\0')
	{
		srcl++;
	}
	while (dest[destl] != '\0')
	{
		destl++;
	}
	for (i = 0; i <= srcl; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}
