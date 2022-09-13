#include "main.h"

/**
 * main - Print _Putchar as a message
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(alp[c]);
	}
	_putchar('\n');
	return (0);
}
