#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - allocates memory using malloc, exit with code (98).
  * @b: allocated memory size.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}

	return (mal);
}
