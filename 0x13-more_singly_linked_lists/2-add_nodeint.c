#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of listint_t list
 * @head: pointer to the address of head of listint_t list
 * @n: integer to be added to the beginning of listint_t list
 *
 * Return: the address of the new element, or NULL if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
