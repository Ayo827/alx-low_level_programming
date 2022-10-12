#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - check the code
* @argc: integer array number
* @agrv: array of pointer
* Description: Print nmber of argument
* Return: 0
**/
int main(int argc, char *agrv[])
{
int length;
length = sizeof(*agrv) / sizeof(agrv[0]);
if (length > 1)
{
printf("%d\n", argc - 1);
return (0);
}
return (0);
}
