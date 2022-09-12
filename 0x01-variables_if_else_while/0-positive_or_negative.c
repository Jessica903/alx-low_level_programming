#include <time.h>
#include <stdlib.h>

/*
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
printf("%d is zero\n", n);
}

else if (n < 0)
{
printf("%d is negative\n", n);
}

else (n > 0) 
{
printf("%d is positive\n", n);
}

return (0);
}

