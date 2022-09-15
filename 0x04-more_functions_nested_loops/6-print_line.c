#include "main.h"

/**
 * print_line - check main
 * @n: an integer input
 * Description: function that draws a straight line
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
