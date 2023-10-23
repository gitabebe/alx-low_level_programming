#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the address of the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *nodes;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp)
		{
			nodes = tmp;
			tmp = tmp->next;
			free(nodes);
		}
		*head = NULL;
	}
}
