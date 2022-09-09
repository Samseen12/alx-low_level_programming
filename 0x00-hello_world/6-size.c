#include <stdio.h>

/**
 * main - print the sizeof many var types
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
