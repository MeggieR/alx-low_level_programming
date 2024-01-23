#include <stdlib.h>
#include "dog.h"
/**
*new_dog - new dog
*@name: the dog's name
*@age: the dog's age
*@owner: the dog's owner
*Return: the new dog pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	ptr->name = malloc(a * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		ptr->name[c] = name[c];
	ptr->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	ptr->owner = malloc(b * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		ptr->owner[c] = owner[c];
	return (ptr);
}
