#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - check code
* @name: string parameter
* @f: pointer to function
* Description: Prints name of a person
* Return: Always 0
**/
void print_name(char *name, void (*f)(char *))
{
f(name);
return (0);
}
