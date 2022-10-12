#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - check the code
* @argc: integer array number
* @agrv: array of pointer
* Description: Add numbers together
* Return: 0
**/
int main(int argc, char *agrv[])
{
int count;
int sum;
sum = 0;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
if ((agrv[count] * 0) == 0)
{
sum = sum + atoi(agrv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
}
else
{
count = 0;
printf("%d\n", count);
return (0);
}
printf("%d\n", sum);
return (0);
}
