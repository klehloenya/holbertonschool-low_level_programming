#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is a fuction to print a string recursively
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') 
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    s ++;
    _puts_recursion(s);
}

