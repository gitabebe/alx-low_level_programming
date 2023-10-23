#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - locates nth node of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * @index: index of the node to locate
 *
 * Return: Null if the node does not exist, otherwise, the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
