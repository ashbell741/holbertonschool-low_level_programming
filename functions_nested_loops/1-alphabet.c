#include "main.h"


/**
 * * description  main - print the alphabet
 *
 * Return: always 0.
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		_putchar(letter);

	}

	_putchar('\n');
}

