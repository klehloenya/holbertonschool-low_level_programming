#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - fuction that prints name
 * @f: var that store the string nane
 * @name: name of person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}



