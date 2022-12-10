#include <stdio.h>
/**
 *main- print tha base numbernot using variable
 *Return: 0
 */
int main(void)
{
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
