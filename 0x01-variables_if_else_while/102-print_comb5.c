#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 <= 99; number1++)
	{
		for (number2 = number1; number2 <= 99; number2++)
		{
			printf("%02d", number1);
			printf(' ');
			printf("%02d", number2);
			if (number1 != 98 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
