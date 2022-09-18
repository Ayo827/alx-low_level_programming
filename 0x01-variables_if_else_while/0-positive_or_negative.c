#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - check main
* Description: Check if value is positive or negative or zero
* Return: (0) Success
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n")
}
return (0);
}
