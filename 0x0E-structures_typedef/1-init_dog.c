#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: pointer to struct dog
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
