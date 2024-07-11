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
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	
	}

	strdout = malloc(sizeof(char) * (i + 1));

	if (strdout == NUL)
	{
		return (NULL);
	
	}

	for (j = 0; j <= i; j++)
	{
		strdout[j] = str[j];
	 
	}
	
		return (strdout)

}
