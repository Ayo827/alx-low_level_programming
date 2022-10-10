#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - check the code
* @d: Pointer to struct
* @name: String parameter
* @age: Int parameter
* @owner: String parameter
* Description: Function to initialize a variable
* Return: nothing
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
