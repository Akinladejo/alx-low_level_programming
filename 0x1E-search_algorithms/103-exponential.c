#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @left: The left bound of the array to search.
 * @right: The right bound of the array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		size_t i;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
		printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
		return (mid);
		else if (array[mid] < value)
		left = mid + 1;
		else
		right = mid - 1;
	}
		return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses exponential ranges to search in the array.
 *              Employs binary search once the range is found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, left, right;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, left, right, value));
}
