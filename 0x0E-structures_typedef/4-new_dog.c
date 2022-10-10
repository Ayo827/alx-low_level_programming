#include <stdio.h>

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
char *name_copy;
char *owner_copy;
name_copy = name;
owner_copy = owner;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL) return (NULL);
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.8, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
