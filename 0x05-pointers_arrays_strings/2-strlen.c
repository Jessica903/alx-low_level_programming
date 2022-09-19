#include "main.h"

/**
 * _strlen - returns the leght of a string
 * @s: string
 * Return: returns the lenght as an integer
 * ;
 */

int _strlen(char *s)
{
	int len = 0;

	while(*(s + len) !='\O')
			len++;

	return (len);
}	
i
