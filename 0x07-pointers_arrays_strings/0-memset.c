#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* _memset - Check the code
* @s: This is a pointer string
* @b: This is a string
* @n: This is an unsigned integer
* Description: fills the first n bytes of memory
* Return: s pointer
**/
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
