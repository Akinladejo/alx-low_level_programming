#include "function_pointers.h"

/**
 * print_name - print name
 * @name: input
 * @f: pointer to function
 *
 * Return: return (0)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
