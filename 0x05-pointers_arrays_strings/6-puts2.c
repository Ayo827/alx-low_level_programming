#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2 - Check the code
* @str: Is a string
* Description: Prints every other character in a string then newline
* Return: string
**/
void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = 1; i <= len; i++)
{
if (i % 2 != 0)
{
printf("%c", str[i - 1]);
}
}
printf("\n");
}
