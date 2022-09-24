#include <stdlib.h>
#include <stdio.h>
/**
* main - Check main
* Description: Print all alphabets in reverse
* Return: (0)
**/
int main(void)
{
char A;
for (A = 'z'; A >= 'a'; A--)
{
putchar(A);
}
putchar('\n');
return (0);
}
