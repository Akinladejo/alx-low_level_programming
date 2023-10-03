#include "main.h"
#include <stdlib.h>
/**
 * maleate_array - maleates char array.
 * @size: size of the array.
 * @c: char storage
 *
 * Return: array of chars
 */
char *maleate_array(unsigned int size, char c)
{
	char *mal;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mal = malloc(sizeof(c) * size);

	if (mal == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mal[i] = c;

	return (mal);
}
