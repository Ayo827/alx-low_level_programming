#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*  factorial - check the code
*  @n: n is an integer parameter
*  Description: Returns factorial of n
*  Return: integer
**/
int factorial(int n)
{
if(n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
