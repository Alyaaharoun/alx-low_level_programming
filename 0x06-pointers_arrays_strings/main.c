#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strcat(char *dest, char *src);

int main(void)
{
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

char *_strcat(char *dest, char *src)
{
	int i;
	int destl = 0;
	int srcl = 0;

	for (i = 0; i != '\0'; i++)
	{
		destl++;
	}
	for (i = 0; i != '\0'; i++)
	{
		srcl++;
	}
	for (i = 0; i <= srcl; i++)
	{
		dest[destl + i] = src[i];
	}
	return (dest);
}
