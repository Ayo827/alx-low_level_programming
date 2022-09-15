#include "main.h"
#include <unistd.h>
/**
* print_numbers - check main
* Description: Print  numbers from 0 to 9
* Return: Nothing
**/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar("%d", i);
}
_putchar("\n");
return (0);
}
