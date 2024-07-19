#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t left = 0, right = step;

    if (!array || size == 0)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", left, array[left]);
    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    right = (right < size) ? right : size - 1;

    while (left <= right)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);
        left++;
    }

    return (-1);
}
