/*
    JTSK-320112
    a4 p1.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
//function declarations
struct list * remove_first(struct list* my_list)
{
    if(my_list == NULL)
        return my_list;
    struct  list * elem;
    elem = my_list->next;
    free(my_list);
    my_list = elem;
    return my_list;
}

struct list * push_front ( struct list * my_list, int value )
{
    struct list * newel ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> info = value ;
    newel -> next = my_list;
    return newel;
}

struct list * push_back ( struct list * my_list, int value )
{
    struct list * cursor, * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }

    newel -> info = value ;
    newel -> next = NULL ;
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}

struct list * add_to_end(struct list* my_list)
{
    int n;
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf("%s\n", "Memory allocating problem");
        exit(1);
    }
    scanf("%d",&n);
    getchar();
    newel = push_back(my_list,n);
    return newel;
}

struct list * add_to_beg(struct list* my_list)
{
    int n;
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf("%s\n", "Memory allocating problem");
        exit(1);
    }
    scanf("%d",&n);
    getchar();
    newel = push_front(my_list,n);
    return newel;
}

void dispose_list (struct list* my_list)
{
    struct  list *nextelem;
    while(my_list != NULL)
    {
        nextelem = my_list -> next;
        free(my_list);
        my_list = nextelem;
    }
}

void print_list(struct list* my_list)
{
    struct list *p;
    for(p = my_list; p; p = p->next)
    {
        printf("%d ",p->info);
    }
    printf("\n");
}


