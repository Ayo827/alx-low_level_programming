#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - Length of a string
* @s: Is a string in double quotes
* Description: Get length of string and return the value
* return: returns string length
**/
int _strlen(char *s)
{
size_t s_length;
s_length = strlen(s);
return (s_length);
}
