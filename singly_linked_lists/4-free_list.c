#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a list_t list
* @head: pointer to the head of the list
*/


void free_list(list_t *head)
{
list_t *current;

list_t *lele_node;

current = head;

while (current != NULL)
{
lele_node = current->next;
free(current->str);
free(current);
current = lele_node;
}
}
