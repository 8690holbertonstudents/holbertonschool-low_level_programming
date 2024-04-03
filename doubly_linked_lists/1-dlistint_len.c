#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: input pointer from typedef list_t
 * Return: The numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
