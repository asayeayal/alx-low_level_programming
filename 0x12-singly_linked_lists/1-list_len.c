#include "lists.h"
/**
 * list_len - ...
 * @h: ...
 * Return: ...
 */
size_t list_len(const list_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
