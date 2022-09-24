#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - Check the code
* @str: Is a string
* Description: Prints half of a string then newline
* Return: string
**/
void puts_half(char *str)
{
int len, newlen;
len = strlen(str);
if (len % 2 == 0)
{
for (newlen = len / 2; newlen < len; newlen++)
{
printf("%c", str[newlen]);
}
}
else
{
for (newlen = (len - 1) / 2; newlen < len; newlen++)
{
printf("%c", str[newlen]);
}
}
printf("\n");
}
