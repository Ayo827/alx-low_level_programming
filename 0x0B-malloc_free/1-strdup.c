#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
* _strdup - check the code
* @str: This is a string
* Description: returns pointer of a duplicate string
* Return: pointer
**/
char *_strdup(char *str)
{
char len;
char *a;
char *newstr;
len = strlen(str);
newstr = strdup(str);
if (str == (char)NULL)
{
return (NULL);
}
else
{
a = malloc(INT_MAX);
if (a == NULL)
{
return (NULL);
}
else
{
a = malloc(len * sizeof(char));
a = newstr;
return (a);
}
}
}
