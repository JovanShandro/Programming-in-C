/*
    JTSK-320112
    a4 p1.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
//struct declarations
struct list
{
    int info;
    struct list *next;
};

//function prototyping
struct list * push_front ( struct list * my_list , int value ) ;
struct list * push_back ( struct list * my_list , int value ) ;
struct list * add_to_end(struct list* my_list);
struct list * add_to_beg(struct list* my_list);
struct list * remove_first(struct list* my_list);
void dispose_list (struct list* my_list);
void print_list(struct list* my_list);

#endif // LINKED_LIST_H
