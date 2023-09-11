#include <stdio.h>
#include <stdlib.h>
// first create a structure
struct student_names
{
	char *name;
	struct student_names *next;
};

// create the linked list
int main()
{
	int i = 1;

	//create four instances of the structure
	struct student_names *name1, *name2, *name3, *name4;
	struct student_names *head;

	//allocate memory for each instance
	name1 = malloc(sizeof(struct student_names));
	name2 = malloc(sizeof(struct student_names));
	name3 = malloc(sizeof(struct student_names));
	name4 = malloc(sizeof(struct student_names));

	//populate each node(insert data into each node of any)
	name1->name = "chrie";
	name2->name = "clarck";
	name3->name = "merry";
	name4->name = "james";

	// linking 
	name1->next = name2;
	name2->next = name3;
	name3->next = name4;
	name4->next = NULL;
	head = name1;
	// now lets print our list;
	while (head != NULL)
	{
		printf("%d) %s\n", i, head->name);
		head = head->next;
		i++;
	}
	return (0);
}

