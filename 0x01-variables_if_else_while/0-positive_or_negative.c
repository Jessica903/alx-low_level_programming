#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand(0) - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}

else if (n < 0)
{
printf("% i is negative\n", n);
}

else 
{
printf("% i is positive\n", n);
}

return (0);
}

