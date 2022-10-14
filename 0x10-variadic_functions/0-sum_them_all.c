#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: integer
 * Description: Adds parameters in variadic function
 * Return: Always sum.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
unsigned int sum;
sum = 0;
if (n == 0)
{
return (0);
}
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(ap, int);
}
va_end(ap);
return (sum);
}
