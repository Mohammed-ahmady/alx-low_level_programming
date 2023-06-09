#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 *@n : input number
 *
 *@ last : the last int value will be saved in int last
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
	_putchar('\n');
}
