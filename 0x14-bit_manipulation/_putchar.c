#include "main.h"
#include <unistd.h>

/**
 * _putchar - ...
 * @c: ...
 *
 * Return: ...
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
