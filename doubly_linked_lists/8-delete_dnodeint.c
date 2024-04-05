#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: input double pointer
 * @index: index value where to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delnode;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);

	delnode = *head;

	if (index == 0)
	{
		*head = delnode->next;
		(*head)->prev = NULL;
	}
	else if (delnode->next == NULL)
	{
		delnode->prev->next = NULL;
	}
	else
	{
		while (i < index)
		{
			if (delnode == NULL)
				return (-1);
			delnode = delnode->next;
			i++;
		}
		delnode->next->prev = delnode->prev;
		delnode->prev->next = delnode->next;
	}
	free(delnode);
	return (1);
}
