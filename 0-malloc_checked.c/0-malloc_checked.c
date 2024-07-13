#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  memory ato be allocated using malloc
 * @b: input int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
