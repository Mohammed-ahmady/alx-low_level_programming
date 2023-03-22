#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n = 50;
	int i = 1;
	int o = 2;

	printf("%d, %d", i, o);
	
	int z = 2;
	for (; z < n; z++)
	{
		int s = i + o;
	       printf(", %d", s);
	       i = o;
		o = s;
	}
	printf("\n");
	return (0);
}
