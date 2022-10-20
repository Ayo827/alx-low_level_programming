#include "lists.h"
/*
* list_len - check code
* @h: pointer to list
* Description: Function to return number of elements
* Return: integer
*/
size_t list_len(const list_t *h)
{
int i;
i = 0;
while(h != NULL)
{
i++;
h = h->next;
}
return (i);
}
