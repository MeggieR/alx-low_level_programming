#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initializes the struct dog variable
*@d: pointer of struct dog that will be initialized
*@name: initialize this name
*@age: initialize this age
*@owner: initialize this owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
