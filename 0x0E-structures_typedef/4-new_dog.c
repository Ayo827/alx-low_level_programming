#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "dog.h"
/**
* new_dog -check the code
* @name: strin parameter
* @age: float parameter
* @owner: string parameter
* Description: Create new struct
* Return: struct
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(INT_MAX);
if (new_dog == NULL) return (NULL);
new_dog = malloc(sizeof(dog_t));
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
