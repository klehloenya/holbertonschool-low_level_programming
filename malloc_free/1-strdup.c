#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy of the new memory location
 * @str: char c
 * Return: 0
 *
 */
char *_strdup(char *str)
{
    char *dup_str;
    size_t len, i;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len] != '\0')
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));
    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup_str[i] = str[i];
    dup_str[len] = '\0';

    return (dup_str);
}
