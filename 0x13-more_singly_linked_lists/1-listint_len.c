#include "lists.h"
#include <stdio.h>
/**
 * listin_len - ...
 * @h: ...
 *
 * Return: ...
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
