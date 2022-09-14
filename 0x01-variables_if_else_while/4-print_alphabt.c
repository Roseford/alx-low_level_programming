#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'q' && s != 'e')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
