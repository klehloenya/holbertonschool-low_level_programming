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
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
