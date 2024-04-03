#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: input pointer
 * Return: Nothing
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
