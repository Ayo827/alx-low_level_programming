#include "lists.h"
/*
* print_list - check code
* @h: pointer to list
* Description: Function to return number of node
* Return: integer
*/
size_t print_list(const list_t *h)
{
int i;
i = 1;
while(h->next != NULL)
{
i++;
}
return (i);
}
