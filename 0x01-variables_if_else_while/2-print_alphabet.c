#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * return: 0 on sucess
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

