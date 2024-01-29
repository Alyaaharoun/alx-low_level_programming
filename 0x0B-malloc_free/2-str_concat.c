#include "main.h"

/**
 * str_concat - function to print 2 string
 * @s1: first parameter
 * @s2: second parameter
 * Return: always 0(success)
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s;
	int l1;
	int l2;
	int l;

	l1 = l2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}
	l = l1 + l2;
	s = (char *) malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		s[i] = s2[j];
	s[l] = '\0';
	return (s);
}
