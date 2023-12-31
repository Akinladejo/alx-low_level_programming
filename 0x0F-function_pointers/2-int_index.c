#include "function_pointers.h"

/**
 * int_index - integer
 * @array: int array.
 * @size: array size
 * @cmp: function pointer
 *
 * Return: index of the cmp element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
