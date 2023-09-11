#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - a structure with 2 members
 * @name: charracter pointer
 * @next: pointer to the next
 */
struct list
{
	char *name;
	struct list *next;
};
struct list *add(struct list *head, char *name);
void print_list(struct list *head);
struct list *re_move(struct list **head, int num);
void search_for(struct list *head, char *name);

#endif
