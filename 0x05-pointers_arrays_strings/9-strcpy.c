#include "main.h"

/**
 * *_strcpy - function to copy string
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * Return: dest value
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
