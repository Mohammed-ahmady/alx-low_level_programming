#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: argumments counter.
 *
 * @argv: argumments vector ((array of strings)).
 *
 * Return: 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
