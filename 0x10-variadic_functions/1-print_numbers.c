#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - check the code
 * @separator: string argument
 * @n: integer
 * Description: Prints parameters in variadic function
 * Return: Always 0.
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
