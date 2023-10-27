#include "main.h"

/**
*get_bit - get bit value
*@n: number
*@index: index 0
*
*Return: converted bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
