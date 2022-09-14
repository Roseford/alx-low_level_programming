#include <stdio.h>
/**
 * main - print all the alphabets in lower case
 *
 * Return: 0 if it's successful
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
