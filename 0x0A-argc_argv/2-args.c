#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - check the code
* @argc: integer array number
* @agrv: array of pointer
* Description: Print each arguments
* Return: 0
**/
int main(int argc, char *agrv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", agrv[count]);
}
return (0);
}
