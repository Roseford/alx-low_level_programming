#include <stdio.h>
/**
 * main - all the number in base 16 in lowercase
 *
 * Return: 0 if it is successful
 */
int main(void)
{
	int b = '0';
	char s = 'a';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (s <= 'f')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
