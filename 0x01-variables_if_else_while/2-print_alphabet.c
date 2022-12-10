#include <stdio.h>
/**
 *main- put character for a game
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
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
