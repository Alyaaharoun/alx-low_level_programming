#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strncat(char *dest, char *src, int n);

int main(void)
{
	
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

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
	for(i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destl + i] = src[i];
	}
	dest[destl + i] = '\0';
	return (dest);
}
