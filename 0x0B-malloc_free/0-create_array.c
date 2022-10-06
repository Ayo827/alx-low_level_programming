#include <stdio.h>
#include <stdlib.h>
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
if (size == 0)
{
return (NULL);
}
else
{
char *a;
char *p;
a = malloc(size * sizeof(size));
a[0] = c;
free(a);
return (p);
}
}
