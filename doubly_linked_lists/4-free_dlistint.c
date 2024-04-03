#include "lists.h"
/**
 * free_dlistint - frees a dlistint list.
 * @head: input pointer
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curnode;

	while (head != NULL)
	{
		curnode = head;
		head = head->next;
		free(curnode);
	}
}
