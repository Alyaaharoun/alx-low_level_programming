#ifndef DOG_H
#define DOG_H
/**
 * struct dog - adog stract
 * @name: adog name
 * @age: adog age
 * @owner: adog owner
 *
 * Description: astruct of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog  dog_t;
#endif
