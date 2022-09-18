#include <stdlib.h>
#include <stdio.h>
/**
* main - check description
* Description: Print alphabets in lowercase except q and e
* Return: 0
**/
int main(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
{
if ((A == 'q') || (A == 'e')
{
continue;
}
else
{
putchar(A);
}
}
putchar('\n');
return (0);
}
