#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: A pointer to the address of the head of the listint_t list
  *
  * Return: 0 if the linked list is empty, otherwise, the head node's data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
	}

	return (n);
}
