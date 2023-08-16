#include <unistd.h>
/**
 * _putchar - character
 * @c: character to be printed
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
