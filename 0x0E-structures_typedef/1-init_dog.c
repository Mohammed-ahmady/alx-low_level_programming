#include "dog.h"
/**
 * init_dog - initialize dog struct
 *
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: the pointer to the struct dog
 *
 * Return: NULL
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

