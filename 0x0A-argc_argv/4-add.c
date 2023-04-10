#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: argumments counter.
 *
 * @argv: argumments vector ((array of strings)).
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum > 0 ? sum : 0);
	return (0);
}
