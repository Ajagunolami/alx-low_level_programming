#include "main.h"
/**
 * print_alpahbet - use the print alphabet
 * Description: print the alphabet lower case
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
