/*
    JTSK-320112
    a1 p4.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
//uncomment the line above to see the change

int main()
{
    int n, scalarp = 0;
    //getting the size of the arrays
    scanf("%d",&n);

    int *v1, *v2, *intermediate_values;
    //allocating memory for the 2 arrays of numbers and one of the intermediate values
    v1 = (int*) malloc(sizeof(int)*n);
    if(v1 == NULL) exit(1);

    v2 = (int*) malloc(sizeof(int)*n);
    if(v2 == NULL) exit(1);

    intermediate_values = (int*) malloc(sizeof(int)*n);
    if(intermediate_values == NULL) exit(1);

    //reading the values of the first vector
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&v1[i]);
    }
    //reading the values of the second vector
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&v2[i]);
    }
    //calculating intermediate values
    for(int i = 0; i<n; i++)
    {
        intermediate_values[i] = v1[i]*v2[i];
        scalarp +=intermediate_values[i];
    }

    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for(int i = 0; i<n; i++)
        {
            printf("%d\n",intermediate_values[i]);
        }
    #endif // INTERMEDIATE

    printf("The scalar product is: %d\n", scalarp);
    //free the dynamically allocated memory
    free(intermediate_values);
    free(v2);
    free(v1);
    return 0;
}
