#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 * which memory was allocated for
 */
char *str_concat(char *s1, char *s2)
{
    size_t len1, len2, i, j;
    char *ptr;

    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    len1 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }

    len2 = 0;
    while (s2[len2] != '\0')
    {
        len2++;
    }

    ptr = malloc(sizeof(char) * (len1 + len2 + 1));

    if (ptr == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < len1; i++)
    {
        ptr[i] = s1[i];
    }

    for (j = 0; j < len2; j++)
    {
        ptr[i + j] = s2[j];
    }

    ptr[i + j] = '\0';

    return (ptr);
}
