#include "lists.h"
/**
 * add_node_end - dds a new node at the end of a list_t list
 * @head: input double pointer
 * @str: input pointer from typedef list_t
 * Return: The numbers of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *curnode;
	int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	newnode->len = i;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	curnode = *head;

	while (curnode->next != NULL)
		curnode = curnode->next;

	curnode->next = newnode;

	return (*head);
}
