#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to print two string
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: the value of s1
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1;
unsigned int l2;
unsigned int i;
unsigned int j;
char *array;

if (s1 != NULL)
{
	i = 0;
	while (s1[i++] != '\0')
		l1++;
}
else
	s1 = "";
if (s2 != NULL)
{
	i = 0;
	while (s2[i++] != '\0')
		l2++;
}
else
	s2 = "";
if (l2 > n)
	n = l2;
array = malloc(sizeof(char) * (l1 + n + 1));
if (array == NULL)
	return (NULL);
for (i = 0; i < l1; i++)
{
	array[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
	array[i] = s2[j];
}
array[l1 + n] = '\0';
return (array);
}
