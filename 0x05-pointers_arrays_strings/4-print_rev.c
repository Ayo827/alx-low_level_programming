#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - Check the code
* @s: Is a string
* Description: Prints string in reverse
* Return: string
**/
void print_rev(char *s)
{
int i;
int s_length;
s_length = strlen(s);
char new_s = "";
for (i = 1; i <= s_length; i++)
{
new_s = new_s + s[s_length - i];
}
puts(new_s);
}
