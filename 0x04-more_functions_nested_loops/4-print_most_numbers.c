#include "main.h"
#include <unistd.h>

/**
* print_most_numbers - check main
* Description: Prints numbers from 0 to 9 except 2 and 4
* Return: Nothing
**/

void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if ((c != 2) || (c != 4))
{
_putchar(c + '0');
}
else
{
continue;
}
}
_putchar("\n");
return (0);
}
