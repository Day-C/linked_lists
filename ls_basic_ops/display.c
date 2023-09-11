#include "main.h"
/**
 * print_list - function prints all the content of a linked list
 *
 * Return: nothing (void)
 */
void print_list(struct list *head)
{
	int i = 1;
	while (head)
	{
		printf("%d)  %s\n", i, head->name);
		head = head->next;
		i++;
	}
}
