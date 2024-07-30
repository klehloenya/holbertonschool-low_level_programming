#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the element of the linked
 * list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
printf("%d\n" , h->n);
h = h->next;
node_count++;
}
return node_count;
}
