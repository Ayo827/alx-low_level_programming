#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* _strpbrk - Check the code
* @s: This is a pointer string
* @accept: This is a pointer string
* Description: search a string for a set of byte
* Return: a pointer to the byte in s
**/
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
