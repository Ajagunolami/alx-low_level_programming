#include <stdio.h>

/**
 * main- print the lowercase and then uppercase
 * execte anytime it is run
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
