#include <stdio.h>
#include "main.h"
/**
* print_diagsums - Check the code
* @a: pointer to array
* @size: size of array
* Description: prints sum of diagonal
* Return: 0
**/
void print_diagsums(int *a, int size)
{
int i, j;
int firstDiagonal = 0;
int secondDiagonal = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
firstDiagonal += a[i][j];
}
else if ((i + j) == (n - 1))
{
secondDiagonal += a[i][j];
}
}
}
printf("%d, %d", firstDiagonal, secondDiagonal);
}
