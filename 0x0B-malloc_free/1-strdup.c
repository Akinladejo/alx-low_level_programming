#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *mal;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	mal = malloc(sizeof(char) * (len + 1));

	if (mal == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		mal[index] = str[index];
	}

	mal[len] = '\0';

	return (mal);

}
