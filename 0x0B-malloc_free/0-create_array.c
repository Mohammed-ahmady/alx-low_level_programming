#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: initializeas the array with it
 *
 * @size: size of array.
 *
 * Return: NULL if size = 0, pointer is is exists.
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
