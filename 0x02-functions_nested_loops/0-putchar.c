#include <unistd.h>
#include "main.h"
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
/*
*\t\t\t The function main prints _putchar
* \t\t\t It returns (0)
*/
