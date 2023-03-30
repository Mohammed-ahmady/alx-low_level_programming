#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, const char *src, size_t n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	size_t i = 0;

	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';
	return (dest);
}

