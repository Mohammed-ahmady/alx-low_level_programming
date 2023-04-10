#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the number of arguments passed into it.
 * followed by a new line.
 *
 * @argc: argumments counter.
 *
 * @argv: argumments vector ((array of strings)).
 *
 * Return: 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
