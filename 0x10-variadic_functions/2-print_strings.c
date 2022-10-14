#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - check the code
 * @separator: string
 * @n: integer
 * Description: Prints parameters in variadic function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);

for (i = 1; i <= n; i++)
{
if(separator == NULL)
{
printf("%s", va_arg(ap, const char*));
}
else if (va_arg(ap, const char*) == NULL)
{
printf("(nil)%s", separator);
}
printf("%s%s", va_arg(ap, const char*), separator);
}
va_end(ap);
printf("\n");
}
