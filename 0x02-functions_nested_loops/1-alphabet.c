#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - print Alphabet lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
