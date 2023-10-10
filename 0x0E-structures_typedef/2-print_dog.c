#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog function
 * @d: dog identifier
 *
 * Description: struct dog print function
 * Return: 0 Success
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
