#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @mn: minimum number of elements
 * @mx: maximum number of elements
 *
 * Return: array pointer address
 *         or NULL if it fails
*/

int *array_range(int min, int max)
{
	int i, *arr;

	if (mn > mx)
		return (NULL);

	array = malloc((mx - mn + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; mn <= mx; i++)
	{
		arr[i] = mn;
		mn++;
	}
	return (arr);
}
