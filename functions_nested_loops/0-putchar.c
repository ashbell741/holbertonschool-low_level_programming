#include "_putchar"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char _putchar[9] ={ '_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(_putchar[i]);
	}
	_putchar('\n');
	return (0);
}

