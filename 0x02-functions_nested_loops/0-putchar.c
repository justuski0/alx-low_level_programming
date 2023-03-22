#include "putchar.h"
/**
 * main - Entry point
 *
 * void - empty
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char holberton[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;
	int size = sizeof(putchar) / sizeof(char);

	for (i = 0; i < size; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');
	return (0);
}
