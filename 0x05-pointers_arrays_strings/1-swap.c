#include "main.h"
#include <stdio.h>
/**
* swap_int - Swap two integers using pointers
* @a: a is an integer pointer
* @b: b is an integer pointer
* return: always (0)
**/
void swap_int(int *a, int *b)
{
*a = *b;
*b = *a;
}
