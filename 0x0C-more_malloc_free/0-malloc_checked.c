#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to be allocated in  memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *mem2;

	mem2 = malloc(b);
	if (mem2 == NULL)
	{
		exit(98);
	}
	return (mem2);
}
