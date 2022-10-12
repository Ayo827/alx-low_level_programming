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
int count;
count = 1;
if (argc > 1)
{
while (count < argc)
{
count++;
}
printf("%d\n", count);
return (0);
}
printf("%d\n", atoi(agrv[0]));
return (0);
}
