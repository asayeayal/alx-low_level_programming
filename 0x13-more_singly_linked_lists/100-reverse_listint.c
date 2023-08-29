#include "lists.h"
/**
 * reverse_listint - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}

	*head = i;
	return (*head);
}
