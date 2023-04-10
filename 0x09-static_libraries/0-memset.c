#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 *
 * @s: a pointer to a character array s
 *
 * @b: a character
 *
 * @n: unsigned integer
 *
 *Return: s the pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
