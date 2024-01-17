#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
void rev_string(char *s);

int main(void)
{
char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

void rev_string(char *s)
{
	int l = 0;
	int i;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	for (i = 0; i < l; i++, l--)
	{
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
	}
}
