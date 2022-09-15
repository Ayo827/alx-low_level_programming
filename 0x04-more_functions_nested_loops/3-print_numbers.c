#include "main.h"
#include <unistd.h>

/**
 * print_numbers - check main
 * Description: Write a function that prints the numbers, from 0 to 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
