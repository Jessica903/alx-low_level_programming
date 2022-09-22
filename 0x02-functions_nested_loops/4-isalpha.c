#include "main.h"

/**
 * _isalpha - shows 1 if input isna letter. Otherwise 0
 *
 * @c: character in ASCII code
 *
 * Return: 1 for letters. 0 for rest
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
