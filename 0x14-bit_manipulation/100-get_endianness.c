#include "main.h"

/**
 * get_endianness - get endianness.
 *
 * Return: - 0 or - 1.
 */
int get_endianness(void)
{
	int value = 1;
	char *endian = (char *)&value;

	if (*endian == 1)
		return (1);

	return (0);
}
