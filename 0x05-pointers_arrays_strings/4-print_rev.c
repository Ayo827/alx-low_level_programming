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
char *new_s_;
new_s_ = "";
s_length = strlen(s);
for (i = 1; i <= s_length; i++)
{
new_s_ = new_s_ + s[s_length - i];
}
puts(new_s_);
}
