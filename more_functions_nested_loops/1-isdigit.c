#include "main.h"
#include <stdio.h>

/** _isdigit - check if the parameter is digit or characteer
*@c: the character to check
*
* Return : 1 if is digit or 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

