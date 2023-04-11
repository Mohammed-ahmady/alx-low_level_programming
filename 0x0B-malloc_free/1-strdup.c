#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: new string which is a duplicate of the string.
 *
 * Return: NULL if size = 0,
 * pointer to newly allocated space in memory is is exists.
 * Returns a pointer newly allocated space in memory , or NULL if it fails
 */

char *_strdup(char *str)
{

	int i;
	char *str2;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	str2 = (char *)malloc(strlen(str) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}

