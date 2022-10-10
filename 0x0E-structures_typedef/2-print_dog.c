#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "dog.h"
/**
* print_dog - check the code
* @d: Pointer to struct
* Description: Print out struct
* Return: nothing
**/
void print_dog(struct dog *d)
{
d = malloc(INT_MAX);
if (d == NULL)
{
    printf("");
}
d = malloc(sizeof(struct dog));
else if ((d->name != NULL) || (d->age >= 0.000000 ) || (d->owner != NULL))
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if ((d->name == NULL) && (d->age > 0.000000) && (d->owner != NULL))
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if ((d->name != NULL) && (d->age < 0.000000) && (d->owner != NULL))
{
printf("Name: %s\n", d->name);
printf("Age: (nil)\n");
printf("Owner: %s\n", d->owner);
}
else if ((d->name != NULL) && (d->age >= 0.000000) && (d->owner == NULL))
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
else if ((d->name == NULL) && (d->age < 0.000000) && (d->owner != NULL))
{
printf("Name: (nil)\n");
printf("Age: (nil)\n");
printf("Owner: %s\n", d->owner);
}
else if ((d->name == NULL) && (d->age >= 0.000000) && (d->owner == NULL))
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
else if ((d->name != NULL) && (d->age < 0.000000) && (d->owner == NULL))
{
printf("Name: %s\n", d->name);
printf("Age: (nil)\n");
printf("Owner: (nil)\n");
}
else
{
printf("Name: (nil)\n");
printf("Age: (nil)\n");
printf("Owner: (nil)\n");
}
free();
}
