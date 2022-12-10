#include <stdio.h>
/**
 *main- put character but not q and e
 *Description: execute at everytime it run
 *print the character inputed
 *Return: 0
 */
int main(void)
{
	int ch;

	ch = 97;
	while (ch <= 122)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
