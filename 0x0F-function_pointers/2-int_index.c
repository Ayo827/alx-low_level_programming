#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - check code
* @array: array of integers
* @size: size of array
* @cmp: pointer to function
* Description: Returns index of element > 0
* Return: Always index
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
if (i >= size)
{
return (-1);
}
return (0);
}
