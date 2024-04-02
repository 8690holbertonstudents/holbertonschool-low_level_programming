#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: input double pointer
 * @str: input pointer from typedef list_t
 * Return: The numbers of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
