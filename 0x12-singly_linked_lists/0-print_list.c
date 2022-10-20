#include "lists.h"
/*
* counter - check code
* @i: counter integer
* Description: counter for print_list function
* Return: integer
*/
int counter(int i)
{
return (i + 1);
}
/*
* print_list - check code
* @h: pointer to list
* Description: Function to return number of node
* Return: integer
*/
size_t print_list(const list_t *h)
{
int i;
i = 0;
while(h != NULL)
{
i = counter(i);
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
}
return (i);
}
