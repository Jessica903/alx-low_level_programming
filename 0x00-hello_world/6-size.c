#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
long li;
long long lli;
char c;
float f;

printf("size of a char: %ld byte (s) \n", sizeof(c));
printf("size of an int: %ld byte (s) \n", sizeof(i));
printf("size of a long int: %ld byte (s) \n", sizeof(li));
printf("size of a long long int: %ld byte (s) \n", sizeof(lli));
printf("size of a float: %ld byte (s) \n", sizeof(f));
return 0;
}
