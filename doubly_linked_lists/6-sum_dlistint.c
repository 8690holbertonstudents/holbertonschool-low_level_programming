#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: input pointer
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curnode;
	int sum = 0;

	if (head == NULL)
		return (0);

	curnode = head;

	while (curnode != NULL)
	{
		sum = sum + curnode->n;
		curnode = curnode->next;
	}
	return (sum);
}
