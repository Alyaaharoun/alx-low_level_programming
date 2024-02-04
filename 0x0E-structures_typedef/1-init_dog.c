#include "dog.h"

/**
 * init_dog - initializes variable
 * @d: dog to initialize
 * @name: adog name
 * @age: adog age
 * @owner: adog owner
 *
 * Return: no return
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
