#include <stdio.h>
#include <math.h>
#include "main.h"
/**
* _pow_recursion - check the code
* @x: integer parameter
* @y: integer parameter
* Description: return x**y
* Return: integer
**/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
int p = pow(x, y);
return (p);
}
}
