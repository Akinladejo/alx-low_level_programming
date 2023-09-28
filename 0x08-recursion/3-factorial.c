#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n - input number to return
 *
 * Return: Return factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
