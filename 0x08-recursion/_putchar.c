#include "main.h"
#include <unistd.h>
/**
 * _putchar - begins executing character c to stdout
 * @c: execute to print
 *
 * Return: On success 1
 * On error, -1 returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
