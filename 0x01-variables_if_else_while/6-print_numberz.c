#include <stdlib.h>
#include <stdio.h>
/**
* main - check description
* Description: Print base 10 numbers using putchar
* Return: 0
**/
int main(void)
{
int A;
for (A = 0; A <= 9; A++)
{
putchar(A + '0');
}
putchar('\n');
return (0);
}
