#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int letter;
	int count;

	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		count++;
		_putchar('\n');
	}
}
