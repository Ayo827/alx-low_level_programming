#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
* str_concat - check the code
* @s1: This is a string
* @s2: This is a string
* Description: returns pointer of a concatenated string
* Return: pointer
**/
char *str_concat(char *s1, char *s2)
{
char *a;
char *c;
char *c0;
int len;
char *s0;
a = malloc(INT_MAX);
if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
s0 = " ";
c0 = strcat(s0, s2);
c = strcat(s1, c0);
len = strlen(c);
if (a == NULL)
{
return (NULL);
}
else
{
a = malloc(len * sizeof(char));
a = c;
return (a);
}
}
