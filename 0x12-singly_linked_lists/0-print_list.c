#include "lists.h"
/**
 * print_list - prints a liked list_t list
 * @h: ...
 *
 * Description: function prints the contents of linked list
 * Return: ...
 */

size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
