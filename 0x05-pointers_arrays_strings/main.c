#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
void print_rev(char *s);

int main(void)
{
	char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
	return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

void print_rev(char *s)
{
int l = 0;
int i;

while (s[l] != '\0')
{
	l++;
}
for (i = (l - 1); i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
