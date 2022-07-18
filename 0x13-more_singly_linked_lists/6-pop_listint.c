#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * of the linked list
 * @head: head of the list.
 *
 * Return: head of node's data.
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
