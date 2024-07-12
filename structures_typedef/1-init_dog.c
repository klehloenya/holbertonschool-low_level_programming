#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - init variable of type struct dog
 * @d: pointer to struct dog to be initialize
 * @name: name to be initialized
 * @age: age to be initilized
 * @owner: owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;	
}
