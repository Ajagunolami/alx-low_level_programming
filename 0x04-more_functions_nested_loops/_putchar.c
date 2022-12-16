#include <unistd.h>
/**
 * main-print putchar
 *
 * Return: 0
 */
int _putchar (char x)
{
	return (write (1, &x, 1));
}
