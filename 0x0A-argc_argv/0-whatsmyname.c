#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - check the code
* @argc: integer argument
* @argv: array of pointers
* Description: prints name of file
* Return: Always 0
**/
int main(int argc, char *argv[])
{
int i;
i = 0;
if (argc > i)
{
printf("%s\n", argv[0]);
return (0);
}
return (0);
}
