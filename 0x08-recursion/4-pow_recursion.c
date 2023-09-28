#include "main.h"

/**
 * _pow_recursion - return power
 *
 * @x: value of x
 * @y: value of y
 *
 * Return: result of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
