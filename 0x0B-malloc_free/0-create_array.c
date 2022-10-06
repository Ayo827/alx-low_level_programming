#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
* create_array - check the code
* @c: a string
* @size: an unsigned int
* Description: Returns pointer to array
* Return: pointer to array
**/
char *create_array(unsigned int size, char c)
{
char *a;
if (size == 0)
{
return (NULL);
}
else
{
a = malloc(INT_MAX);
if (a == NULL)
{
return (NULL);
}
else
{
a = malloc(size * sizeof(char));
a[0] = c;
return (a);
}
}
}
