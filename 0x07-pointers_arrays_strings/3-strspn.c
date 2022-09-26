#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* _strspn - Check the code
* @s: This is a pointer string
* @accept: This is a pointer string
* Description: get length of prefix substring
* Return: no of bytes from initial segment of s
**/
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
