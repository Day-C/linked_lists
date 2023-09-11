#include "main.h"

int main()
{
	struct list *head;
	head = add(head, "Merry");
	add(head, "james");
	add(head, "Edel");
	add(head, "levis");
	printf("-------------- original list ----------------\n");
	print_list(head);
	printf("-------------- list after removing one node ------------\n");
	re_move(&head, 2);
	print_list(head);
	search_for(head, "Edel");
	return (0);
}
