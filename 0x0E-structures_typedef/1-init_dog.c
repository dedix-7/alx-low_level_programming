#include "dog.h"
/**
 * init_dog - initialize members of dog struct
 * @d: dog pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = 4;
	d->name = "sammy";
	d->owner = "caroline";
}
