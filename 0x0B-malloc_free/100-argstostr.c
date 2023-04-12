#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 *
 * @ac: integer
 * @av: character
 *
 * Return:  NULL if ac == 0 or av == NULL,
 * Returns a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, length, pos;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}
	str[length - 1] = '\0';
	return (str);
}

