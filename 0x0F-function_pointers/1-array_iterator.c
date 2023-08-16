#include "function_pointers.h"
/**
 * array_iterator - executes an element of an array
 * @size: an array size
 * @action: pointer to function
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
