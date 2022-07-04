#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: none
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == '\0')
    return;
    d->name = name;
    d->age = age;
    d->owner = owner;
}
