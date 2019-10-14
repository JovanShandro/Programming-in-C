/*
    JTSK-320112
    a3 p1.c
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

//the push_front function from the slides
struct list * push_front ( struct list * my_list , int value ) {
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
//the push_back function from the slides
struct list * push_back ( struct list * my_list , int value ) {
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
//the function from the slides
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
//prints the list
void print_list(struct list* my_list)
{
    struct list *p;
    for(p = my_list; p; p = p->next)
    {
        printf("%d ",p->info);
    }
    printf("\n");
}

int main()
{
    char a;
    int done = 0, n; // done used for loop and n for the number to be read
    //my list is the list we will use, elem will be used only to remove the first element
    struct list *my_list = NULL;
    struct list *elem = NULL;

    do
    {
        scanf("%c",&a);
        switch(a)
        {
            case 'a':
                scanf("%d",&n);
                getchar();
                my_list = push_back(my_list, n);
                break;
            case 'b':
                scanf("%d",&n);
                getchar();
                my_list = push_front(my_list, n);
                break;
            case 'r':
                if(my_list == NULL)
                    break;
                elem = my_list->next;
                free(my_list);
                my_list = elem;
                break;
            case 'p':
                print_list(my_list);
                break;
            case 'q':
                dispose_list(my_list);
                done = 1;
                break;
        }
    } while(!done);

    return 0;
}
