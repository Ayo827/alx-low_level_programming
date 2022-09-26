#include "main.h"
#include <stdio.h>
/**
* print_diagsums - check the code
* @a: pointer to array
* @size: integer size of array
* Description: prints sum of diagonal
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int firstDiagonal;
firstDiagonal = 0
int secondDiagonal;
secondDiagonal = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
firstDiagonal += a[i][j];
}
if ((i + j) == (n - 1))
{
secondDiagonal += a[i][j];
}
}
}
printf("%d, %d", firstDiagonal, secondDiagonal);
}
