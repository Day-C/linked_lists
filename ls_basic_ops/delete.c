#include "main.h"

struct list *re_move(struct list **head, int num)
{
	struct list *prev = *head;
	struct list *curr = *head;
	int i = 1;

	if (num == 1)
	{
		*head =  curr->next;
		free(curr);
	}
	else
	{
		while (num != i)
		{
			prev = curr;
			curr = curr->next;
			num--;
		}
		prev->next = curr->next;
		free(curr);
	}

	return (*head);
}
