#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - Check the code
* @s: Is a string
* Description: Prints string in reverse
* Return: string
**/
void rev_string(char *s)
{
int i, len, temp;  
len = strlen(s);  
for (i = 0; i < len/2; i++)  
{   
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;  
}
}
