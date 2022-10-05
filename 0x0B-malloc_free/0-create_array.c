#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int length = strlen(c);
if (size == 0)
{
return (NULL);
}
else
{
char a[1];
char *p;
a[0] = c;
p = &a[0];
return (p);
}
}
