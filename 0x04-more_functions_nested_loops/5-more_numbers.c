#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = 1; i <= 12; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			j = n;
			if (j > 9)
			{
			_putchar(1 + 48);
			n = j % 10;
			}
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
