#include "lists.h"
/*
* print_list - check code
* @h: pointer to list
* Description: Function to return number of node
* Return: integer
*/
int counter(int i)
{
return (i + 1);
}

size_t print_list(const list_t *h)
{
int i;
i = 0;
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
while(h != NULL)
{
i = counter(i);
h = h->next;
}
return (i);
}
