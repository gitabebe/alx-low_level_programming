#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of listint_t list
 * @head: pointer to the address of the head of listint_t list
 * @n: integer to be added to the end of listint_t list
 *
 * Return: address of the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (new);
}
