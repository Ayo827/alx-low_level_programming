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
int count;
int mul;
count = 0;
if (argc == 3)
{
mul = argv[1] * argv[2];
printf("%d\n", mul);
return (0);
}
printf("Error\n"));
return (1);
}
