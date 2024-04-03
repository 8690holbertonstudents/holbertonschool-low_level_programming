#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: input pointer
 * @index: the index given at input
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curnode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	curnode = head;

	while (curnode->next != NULL)
	{
		curnode = curnode->next;
		i++;
		if (i == index)
			return (curnode);
	}
	return (NULL);
}
