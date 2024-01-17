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

	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
