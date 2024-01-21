#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strstr(char *haystack, char *needle);

int main(void)
{
char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0') 
	{
        return haystack;
    }
    while (*haystack != '\0')
	{
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0')
		{
            return haystack; // Found the substring
        }
        haystack++;
    }

    return NULL;
}
