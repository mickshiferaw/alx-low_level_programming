#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog
 * @name: name
 * @age: age
 * @owner: owner
 * @d: struct
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	return('\0');
}
