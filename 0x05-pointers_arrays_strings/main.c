#include "main.h"
#include <unistd.h>

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
	int i = 0;

	while (s[0])
	{
		i++;
	}
	while(i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
