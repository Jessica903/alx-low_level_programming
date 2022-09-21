#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will been encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int index 1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A' '?', '?', 'T'};

	while (str[++index1])
	{
		for (index = 0; index <= 7; index++)
		{
			if (str[index1] == leet[index2] ||
			str[index] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}

	}
	return (str);
}
