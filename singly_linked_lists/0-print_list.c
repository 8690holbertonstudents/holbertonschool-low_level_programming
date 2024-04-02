#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: input pointer from typedef list_t
 * Return: The numbers of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		exit(0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count ++;
	}
	return (count);
}
