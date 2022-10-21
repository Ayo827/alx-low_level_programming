#include "lists.h"
/**
* add_node -Check the code
* @head: pointer to address
* @str: string
* Description: Function to add a new node
* Return: Pointer of next list
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
printf("[%lu] %s\n", (long unsigned int)new->len, new->str);
return (new->next);
}
