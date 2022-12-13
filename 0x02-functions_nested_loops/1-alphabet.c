#include "main.h"
/**
 * print alpahbet- print alphabet in lower case
 *
 * return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
