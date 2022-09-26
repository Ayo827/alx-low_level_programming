#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* _strstr - Check the code
* @haystack: This is a pointer string
* @needle: This is a pointer string
* Description: locates a substring
* Return: a pointer to start of substring
**/
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
