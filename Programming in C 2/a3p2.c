/*
    JTSK-320112
    a3 p2.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};

struct list * push_front ( struct list * my_list , int value ) ;

struct list * push_back ( struct list * my_list , int value ) ;

struct list * add_to_end(struct list* my_list);

struct list * add_to_beg(struct list* my_list);

struct list * remove_first(struct list* my_list);

struct list * insert_elem(struct list* my_list);

void reverse_the_list(struct list **my_list);

void dispose_list (struct list* my_list);

void print_list(struct list* my_list);

int get_size(struct list* my_list);

int main()
{
    char a;
    int done = 0;
    struct list *my_list = NULL;
    
    do
    {
        a = getchar();
        switch(a)
        {
            case 'a':
                my_list = add_to_end(my_list);
                break;
            case 'b':
                my_list = add_to_beg(my_list);
                break;
            case 'r':
                my_list = remove_first(my_list);
                break;
            case 'p':
                print_list(my_list);
                break;
            case 'q':
                dispose_list(my_list);
                done = 1;
                break;
            case 'i':
                my_list = insert_elem(my_list);
                break;
            case 'R':
                reverse_the_list(&my_list);
                break;
        }
    } while(!done);

    return 0;
}

void reverse_the_list(struct list **my_list)
{
    //p stores previous node, cursor the current and temp 
    //stores the temporary head of the list
    struct list *temp, *p=NULL, *cursor = *my_list;
    while(cursor != NULL)
    {
        temp         = cursor->next;//advance by one 
        cursor->next = p;//next becomes the previous for all nodes
        p            = cursor;//present now is previous 
        cursor       = temp;//move the cursor to the next node
    }
    *my_list = p;
}

struct list * insert_elem(struct list* my_list)
{
    struct list *newel = NULL, *cursor, *elem = NULL;
    int size = get_size(my_list);
    int a, b;
    //allocating memory
    newel = (struct list*)malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf("%s\n", "Allocating problem");
        exit(1);
    }
    //initialize cursor at the start of list
    cursor = my_list;
    scanf("%d",&a);
    scanf("%d",&b);
    getchar();
    // if entered a is out of bound print and return
    if(a < 0 || a>size)
    {
        printf("%s\n", "Invalid position!");
        return my_list;
    }
    //handle the case of a = 0;
    if(a == 0)
    {
        my_list = push_front(my_list, b);
        return my_list;
    }
    //handle the case of a = size;
    if(a == size)
    {
        my_list = push_back(my_list, b);
        return my_list;
    }
    //handle cases for a not 0
    for(int i =0; i<a-1; i++)
    {
        cursor = cursor -> next;
    }
    elem           = cursor -> next;
    newel -> info  = b;
    cursor -> next = newel;
    newel -> next  = elem;
    return my_list;
}
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

struct list * push_front ( struct list * my_list , int value ) 
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

struct list * push_back ( struct list * my_list , int value ) 
{
    struct list * cursor , * newel ;
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

int get_size(struct list* my_list)
{
    int count = 0;
    struct list* p;

    for(p = my_list; p; p = p->next)
        count++;
    return count;
}

