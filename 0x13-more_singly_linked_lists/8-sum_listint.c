#include "lists.h"
/**
 * sum_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int sum_listint(listint_t *head)
{
	int sum_list;

	sum_list = 0;
	while (head != NULL)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
