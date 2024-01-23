#ifndef _DOG_H_
#define _DOG_H_
/**
*struct dog - contains the dog's detail
*@name: the dog name
*@age: the dog's age
*@owner: the dog's owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
