#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: the number of arguments passed
 * @argv: array pointer holds arguments passed
 *
 * Return: Always 0 (Sucess)
*/

int main(int argc, char *argv[])
{
	int cents, co_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			co_num += 1;
		}
	}
	printf("%d\n", co_num);
	return (0);
}
