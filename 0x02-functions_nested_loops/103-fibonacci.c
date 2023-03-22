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
	unsigned long f1 = 0, f2 = 1, sum;
	float total;

		while (1)
		{
			sum = f1 + f2;

			if (sum > 4000000)
				break;

			if (s % 2 == 0)
				total += sum;
			f1 = f2;
			f2 = sum;
		}
		printf("%.0f\n", total);
			return (0);
}

