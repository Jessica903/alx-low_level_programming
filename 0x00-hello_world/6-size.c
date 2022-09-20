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

	printf("Size of a char: %d (byte)\n", sizeof(a));
	printf("Size of an int: %d (bytes)\n", sizeof(b));
	printf("Size of long a int: %d (bytes)\n", sizeof(c));
	printf("Size of a long long int: %d (bytes)\n", sizeof(d));
	printf("Size of a float: %d (bytes)\n", sizeof(e));
	return (0);
}

