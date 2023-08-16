#include "function_pointers.h"
/**
 * print_name - a name to be printed
 * @f: pointer to a function
 * @name: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
