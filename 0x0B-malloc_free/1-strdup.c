#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
char newstr;
char p;
len = strlen(str);
newstr = strdup(str);
if (str == NULL)
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
p = a;
free(a);
return (p);
}
}
}
