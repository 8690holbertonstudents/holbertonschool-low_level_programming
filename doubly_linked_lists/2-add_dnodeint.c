#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 *  of a dlistint_t list
 * @head: input double pointer
 * @n: input int value to add
 * Return: The numbers of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
