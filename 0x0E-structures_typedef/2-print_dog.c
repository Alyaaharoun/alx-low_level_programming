#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print information
 * @d: adog to initialize
 * Return: no return
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name:%s\nAge:%s\nOwner:%s\n", d->name, d->age, d->owner);
}