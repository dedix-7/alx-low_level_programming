#include "dog.h"
/**
 * print_dog - function that prints dog struct
 * @d: pointer to dig struct
 * no return:
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("(nil)");
	else
	  printf(Name:
