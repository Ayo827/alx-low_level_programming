#include <stdio.h>
/**
* main - Entry point
*
* REturn: 0 (Success)
**/
int main(void)
{
char a;
int b;
long long int d;
float f;
long int g;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof());
return (0);
}
