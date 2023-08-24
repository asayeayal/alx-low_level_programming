#include "lists.h"
/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t nchar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	n->len = nchar;
	n->next = *head;
	*head = n;

	return (*head);
}
