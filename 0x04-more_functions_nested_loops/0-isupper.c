#include <stdio.h>
#include "main.h"
/**
* _isupper - check main
* @c: is an integer input n
* Description: Checks for uppercase character
* Return: 1 if uppercase else 0
**/
int _isupper(int c)
{
char ch;
int n = 0;
for (ch = 'A'; ch <= 'Z'; ch++)
{
if (ch == c)
{
n = 1;
break;
}
}
return (n);
}
