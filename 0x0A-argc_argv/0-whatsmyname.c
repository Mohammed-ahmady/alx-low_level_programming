#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name, followed by a new line.
 *
 * @argc: argumments counter.
 *
 * @argv: argumments vector ((array of strings)).
 *
 * Return: 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
