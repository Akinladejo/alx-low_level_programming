#include <stdio.h>
#include <stdlib.h>
/**
 * main - print arguments on new line
 * @argc: size of arguments
 * @argv: argument
 *
 * Return: always (0)
 */
int main(int argc, char **argv)
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", *(argv + num));
		num++;
		(*argv)++;
	}
	return (0);
}
