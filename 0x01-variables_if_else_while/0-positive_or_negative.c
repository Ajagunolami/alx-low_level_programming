#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- assign random number to n int anytime
 *execute at everytime it run
 *print the polarity of the number
 *return: Always zero everytime
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number %i is positive\n", n);
	else if (n == 0)
		printf("the number %i is zero\n", n);
	else
		printf("the number %i is negative\n", n);
	return (0);
}
