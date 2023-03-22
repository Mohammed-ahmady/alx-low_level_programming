#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *              starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	long i = 1;
	long o = 2;
	int z = 2;
	long to;

	printf("%lu, %lu", i, o);

		while (z < 400000)
		{
			long s = i + o;

			if (s % 2 == 0)
				to += s;
			i = o;
			o = s;
			z++;
		}
		printf("%lu\n", to);
			return (0);
}

