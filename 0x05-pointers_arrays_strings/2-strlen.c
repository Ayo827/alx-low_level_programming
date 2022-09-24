#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - Length of a string
* @str: This is string in double quotes
* return: always (0)
**/
int _strlen(char *s)
{
size_t s_length;
s_length = strlen(*s);
return s_length;
}
