#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name : % s\n", d->name);
		printf("age : % f\n", d->age");
		printf("owner : % s\n", d->owner);
	}
}
