#include "main.h"

/**
*clear_bit - set bit value to 0
*@n: number
*@index: index 0
*
*Return: bit value
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
