#include <stdio.h>

/**
* prints alphabet in lower case
*
* Return: Always 0.
*/

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
