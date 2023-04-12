#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  rconcatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: NULL on failure, s1 and s2 on success.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	res = malloc(len1 + len2 + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}
