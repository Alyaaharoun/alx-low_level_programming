#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *leet(char *s);

int main(void)
{
char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

char *leet(char *s)
{
    int i, j;
    char *a = "aAeEoOtTlL";
    char *b = "4433007711";

    for (i = 0; s[i] != '0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == a[j])
            {
                s[i] = b[j];
                break;
            }
        }
    }
    return (s);
}
