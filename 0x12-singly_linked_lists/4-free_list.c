#include "lists.h"
/**
 * free_list - ...
 * @head: ...
 * Return: ...
 */
void free_list(list_t *head)
{
	list_t *s;

	while ((s = head) != NULL)
	{
		head = head->next;
		free(s->str);
		free(s);
	}
}
