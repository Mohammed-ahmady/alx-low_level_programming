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

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10) 
			{
                	_putchar(j / 10 + '0');
            		}	
            		_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
