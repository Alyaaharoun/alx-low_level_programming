#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strcpy(char *dest, char *src);

int main(void)
{
char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

char *_strcpy(char *dest, char *src)
{
	int i = -1;
	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
