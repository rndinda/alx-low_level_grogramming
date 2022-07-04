#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intitalizes variable of type struct dog
 * @d: Dog to be initalized
 * @name: Name of dog
 * @age: age of dog
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
