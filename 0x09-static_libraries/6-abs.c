#include "main.h"

/**
 *  _abs - computes the absolute value of an integer.
 *
 * @i : The input number should be integer
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
