#include "main.h"
#include <stdio.h>
/**
* print_array - Check the code
* @*a: Is a pointer to an array
* Description: Print elements in an array, separating them with comma and space.
* Return: nothing
**/
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d, ", *a[i]);
}
printf("\n");
}
