#include "main.h"

/**
 * set_bit - Set bit value
 * @n: number
 * @index: index 0.
 *
 * Return: bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
