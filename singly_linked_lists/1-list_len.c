#include "lists.h"
/**
 * list_len - returns the number of elements
 * in a linked list_t list
 * @h: input pointer from typedef list_t
 * Return: The numbers of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		exit(0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
