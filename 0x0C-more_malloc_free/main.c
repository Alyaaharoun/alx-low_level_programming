#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * main - function to multiply two numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[])
{
char *c;
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int l1;
int l2;
int i;
int j;
int l;
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
if (n >= l2)
    n = l2;
l = l1 + n;
array = malloc(sizeof(char) * (l + 1));
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
array[l] = '\0';
return (array);
}
