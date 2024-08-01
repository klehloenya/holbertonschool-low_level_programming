#include "stdio.h"

/**
* main - Entry point.
*@argc: count
*@argv: argument string
*
* Return: int count of arguments
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
/* Print the value of argc, which represents the number of arguments */
printf("%d\n", argc - 1);

return (argc - 1);
}
