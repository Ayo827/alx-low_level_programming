#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - check code
* @array: array of integers
* @size: size of array
* Description: Prints elements of an array
* Return: Always 0
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++) action(array[i]);
}
