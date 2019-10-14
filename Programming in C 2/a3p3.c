/*
    JTSK-320112
    a3 p3.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//struct declaration
struct double_linked_list
{
	char c;
	struct double_linked_list *next;
	struct double_linked_list *prev;
};
//function prototyping
struct double_linked_list *push_front( struct double_linked_list *, char ch);
struct double_linked_list *remove_char (struct double_linked_list*, char ch);
void print_list(struct double_linked_list*);
void print_back(struct double_linked_list*);
void free_and_quit(struct double_linked_list* );

int main()
{
	char ch;
	int n, done = 0;
	struct double_linked_list *my_list = NULL;
	do
	{
		scanf("%d",&n);
		getchar();

		switch(n)
		{
			case 1:
				scanf("%c",&ch);
				my_list = push_front(my_list, ch);
				break;
			case 2:
				scanf("%c",&ch);
				my_list = remove_char(my_list, ch);
				break;
			case 3:
				print_list(my_list);
				break;
			case 4:
				print_back(my_list);
				break;
			case 5:
				free_and_quit(my_list);
				done = 1;
				break;
		}
	}while(!done);

	return 0;
}

struct double_linked_list *push_front( struct double_linked_list * my_list, char ch)
{
	struct double_linked_list *newel;
	newel = (struct double_linked_list *) malloc(sizeof(struct double_linked_list));
	if(!newel)
		exit(0);
	if(my_list == NULL)
	{
		newel->c = ch;
		newel->next = NULL;
		newel->prev = NULL;
		return newel;
	}
	newel->c = ch;
	newel ->prev = NULL;
	newel->next = my_list;
	my_list->prev = newel;
	return newel;
}
//removes all nodes with ch as a char
struct double_linked_list *remove_char (struct double_linked_list* my_list, char ch)
{
	int i = 0;
	struct double_linked_list *p = NULL, *n = NULL, *cursor;
	cursor = my_list;
	if(my_list == NULL)
		return my_list;
	while( cursor)
	{
		p = cursor->prev;
		n = cursor->next;
		//if it is in the first value of the linked list
		if(p == NULL && (cursor->c == ch))
		{
			n->prev = NULL;
			cursor->next = NULL;
			cursor = n;
			my_list = n;
			i++;
			continue;
		}
		//if it is in the last value
		if(n == NULL && cursor->c == ch)
		{
			p->next = NULL;
			cursor->prev = NULL;
			i++;
			break;
		}
		//handles all other cases
		if(cursor->c == ch)
		{
			p->next = n;
			n->prev = p;
			cursor->next = NULL;
			cursor->prev = NULL;
			cursor = n;
			i++;
			continue;
		}

		cursor = cursor->next;
	}
	if(i==0)
		printf("%s\n", "The element is not in the list!");
	return my_list;
}
//frees the memory allocated by the list
void free_and_quit(struct double_linked_list* my_list)
{
	struct double_linked_list *elem;
	while(my_list!=NULL)
	{
		elem = my_list->next;
		free(my_list);
		my_list = elem;
	}
}
//prints the list
void print_list(struct double_linked_list *my_list)
{
	struct double_linked_list* cursor;
	for(cursor = my_list; cursor; cursor = cursor->next)
	{
		printf("%c ", cursor->c);
	}
	printf("\n");
}
//prints the list backwards
void print_back(struct double_linked_list *my_list)
{
	struct double_linked_list *cursor;
	//make sure the cursor goes to the end
	for(cursor = my_list; cursor; cursor = cursor->next){
		if(cursor->next == NULL)
			break;
	}
	//print elements backwards
	for(; cursor; cursor = cursor->prev)
		printf("%c ", cursor->c);
	printf("\n");
}

