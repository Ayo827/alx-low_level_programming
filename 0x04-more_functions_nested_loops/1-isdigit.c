#include <stdio.h>
#include "main.h"
/**
* _isdigit - check main
* @c: is an integer input n
* Description: returns 1 if digit else 0
* Return: 0 or 1
**/
int _isdigit(int c)
{
char i;
int n = 0;
for (i = '0'; i <= '9'; i++)
{
if (i == c)
{
n = 1;
break;
}
}
return (n);
}
