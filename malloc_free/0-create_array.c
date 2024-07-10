#include "main.h"
#include <stdlib.h>

/**
 * Create_array - create array of size size and assign char c
 * Size: size of array
 * @c: char to be assigned
 * Describe: create array of size size and assign char c
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; 1 < size; i++)
		str[1] = c;
	return (str);
}


