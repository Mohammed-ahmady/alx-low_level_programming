#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * @argc: argumments counter.
 *
 * @argv: argumments vector ((array of strings)).
 *
 * Return: 0 if success, 1 if the is an Error.
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
