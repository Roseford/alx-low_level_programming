#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a number is positve, negative or zero.
(*
 * Return: 0 on sucssesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%i is %s\n", n, "negative");
	}
	else
	{
		printf("%i is %s\n", n, "zero");
	}
	return (0);
}
