#include <math.h>
#include <stdio.h>
#include "main.h"
/**
* _sqrt_recursion - check the code
* @x: integer parameter
* Description: return square root of x
* Return: integer
**/
int _sqrt_recursion(int x)
{
float y;
y = (float) x;
float s = sqrt(y);
int v = (int) s;
if ((s - v) == 0.000000)
{
return (v);
}
else
{
return (-1);
}
}
