/*
    JTSK-320112
    a3 p4.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
//the same main used in p1
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
        }
    } while(!done);

    return 0;
}
