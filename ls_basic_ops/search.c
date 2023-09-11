#include "main.h"

void search_for(struct list *head, char *name)
{
	while (head)
	{
		if (head->name == name)
		{
			printf("Yes %s is in this list\n", name);
			return;
		}
		head = head->next;
	}
	printf("sorry there is no one with that name here\n");
}
