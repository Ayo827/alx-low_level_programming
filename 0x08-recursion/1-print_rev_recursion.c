#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* print_rev_recursion - Check the code
* @s: Is a string
* Description: Prints string in reverse
* Return: 0
**/
void _print_rev_recursion(char *s)
{
int i, s_length;
char *new_s_;
new_s_ = "";
s_length = strlen(s);
for (i = 1; i <= s_length; i++)
{
new_s_ = new_s_ + s[s_length - i];
}
puts(new_s_);
}
