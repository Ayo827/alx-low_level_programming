#include <math.h>
#include <stdio.h>
#include "main.h"
#include "main.c"

/**
* _sqrt_recursion - check the code
* @x: integer parameter
* Description: return square root of x
* Return: integer
**/
int _sqrt_recursion(int x)
{
float y;
float s;
int v;
y = (float) x;
s = sqrt(y);
v = (int) s;
if ((s - v) == 0.000000)
{
return (v);
}
else
{
return (-1);
}
}
