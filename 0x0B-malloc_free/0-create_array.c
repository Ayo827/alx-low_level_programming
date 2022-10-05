#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - check the code
* @s: a string
* @size: an unsigned int
* Description: 
* Return: pointer to array
**/
char *create_array(unsigned int size, char c)
{
char a[] = c;
char *p;
p = &a;
if (size == 0)
{
return (NULL);
}
else
{
return (*p);
}
}
