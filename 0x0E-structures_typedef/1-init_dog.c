#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - inits a variable of
*type dog
*@d: dog init
*@name: dog name
*@age: dog age
*@owner: dog owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
