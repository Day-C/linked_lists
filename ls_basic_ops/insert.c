#include "main.h"
/**
 * add - functon adds a new node to the linked list
 * @head: first node of the list
 * @name: item to be added
 * Return: returs a pointer to the first node
 */
struct list *add(struct list *head, char *name)
{
	struct list *std1;
	struct list *temp;
	int i = 0;

	temp = head;
	std1 = malloc(sizeof(struct list));

	std1->name = name;
	std1->next = NULL;

	if (head == NULL)
	{
		head = std1;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = std1;

	}
	return (head);
}
