#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: integer
 * Description: Adds parameters in variadic function
 * Return: Always sum.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 1; i <= n; i++)
{
if(separator == NULL)
{
printf("%d", va_arg(ap, int));
}
printf("%d%s", va_arg(ap, int), separator);
}
va_end(ap);
printf("\n");
return (0);
}
