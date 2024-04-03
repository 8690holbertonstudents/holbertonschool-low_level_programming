#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: input pointer
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *curnode;

	while (head != NULL)
	{
		curnode = head;
		head = head->next;
		free(curnode->str);
		free(curnode);
	}
}
