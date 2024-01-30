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
void *malloc_checked(unsigned int b);

int main(int argc, char *argv[])
{
char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void *malloc_checked(unsigned int b)
{
    void *ptr;
    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return (ptr);
}
