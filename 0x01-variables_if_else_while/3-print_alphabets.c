#include <stdlib.h>
#include <stdio.h>
/**
* main - check description
* Description: Print alphabets in lowercase and uppercase
* Return: 0
**/
int main(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
{
putchar(A);
}
for(A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}
