#include <stdio.h>

/**
 * main - Prints the sizeof many variable types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu (byte)\n", sizeof(a));
	printf("Size of an int: %lu (bytes)\n", sizeof(b));
	printf("Size of long a int: %lu (bytes)\n", sizeof(c));
	printf("Size of a long long int: %lu (bytes)\n", sizeof(d));
	printf("Size of a float: %lu (bytes)\n", sizeof(e));
	return (0);
}

