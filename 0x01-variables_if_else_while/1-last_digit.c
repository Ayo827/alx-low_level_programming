#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
main - check description
Description: Get last digit of n
* Return: (0) Success
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n[1] > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, n[1]);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and 0", n, n[1]);
}
else
{
printf("Last digit of %d is %d and is 0", n, n[-1]);
}
printf("\n");
return (0);
}
