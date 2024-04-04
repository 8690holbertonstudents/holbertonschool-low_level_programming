#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: input double pointer
 * @idx: index value where to add the new node
 * @n: value to add to the dlistint_t structure
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *curnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	/*newnode->next = NULL;*/

	if (*h == NULL)
	{
		newnode->prev = NULL;
		*h = newnode;
		return (*h);
	}

	curnode = *h;


	while (i < (idx - 1))
	{
		if (curnode == NULL)
			return (NULL);
		curnode = curnode->next;
		i++;
	}

	curnode->next->prev = newnode;
	newnode->prev = curnode;
	newnode->next = curnode->next;
	curnode->next = newnode;

	return (curnode);
}
