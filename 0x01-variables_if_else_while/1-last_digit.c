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
char x = n;
if (x[-1] > 5)
{
printf("Last digit of %d is %d and is greater than 5", x, x[-1]);
}
else if (x[-1] < 6 && x[-1] != 0)
{
printf("Last digit of %d is %d and is less than 6 and 0", x, x[-1]);
}
else
{
printf("Last digit of %d is %d and is 0", x, x[-1]);
}
printf("\n");
return (0);
}
