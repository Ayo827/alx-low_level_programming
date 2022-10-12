#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - check the code
* @argc: integer array number
* @agrv: array of pointer
* Description: Print multiplication of arguments
* Return: 0
**/
int main(int argc, char *agrv[])
{
int mul;
if (argc == 3)
{
mul = atoi(agrv[1]) * atoi(agrv[2]);
printf("%d\n", mul);
return (0);
}
printf("Error\n");
return (1);
}
