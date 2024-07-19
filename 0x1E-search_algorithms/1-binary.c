#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
    size_t i;

    printf("Searching in array: ");
    for (i = l; i <= r; i++)
        printf("%d%s", array[i], i < r ? ", " : "\n");
}

/**
 * binary_search_index - Searches a value in a sorted array using binary search.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
    size_t m;

    if (!array)
        return (-1);

    print_array(array, l, r);

    while (l <= r)
    {
        m = l + (r - l) / 2;

        if (array[m] == value)
            return (m);
        else if (array[m] < value)
            l = m + 1;
        else
            r = m - 1;

        print_array(array, l, r);
    }

    return (-1);
}

/**
 * binary_search - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    return (binary_search_index(array, 0, size - 1, value));
}
