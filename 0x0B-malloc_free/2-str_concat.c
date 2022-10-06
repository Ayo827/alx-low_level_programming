#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
* str_concat - check the code
* @s1: This is a string
* @s2: This is a string
* Description: returns pointer of a duplicate string
* Return: pointer
**/
char *str_concat(char *s1, char *s2)
{
char *a;
char c;
char len;
a = malloc(INT_MAX);
if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
c = s1 + " " + s2;
len = strlen(c);
if (a == NULL)
{
return (NULL);
}
else
{
a = malloc(c * sizeof(char));
a = c;
return (a);
}
}