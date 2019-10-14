/*
    JTSK-320112
    a2 p2.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, n;
    char one[100], two[100], *conc;

    //reading the two strings
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    //allocating memory for the conc array
    n = strlen(one) + strlen(two) -1;
    conc = (char*)malloc(sizeof(char)*n);
    if(!conc)
        exit(1);

    //copying the first string
    for(i =0; i<strlen(one)-1;i++){
        conc[i] = one[i];
    }
    //changing i as we now want to add the second string
    i =strlen(one)-1;
    for(int j =0; two[j]!='\n'; j++, ++i){
        conc[i] = two[j];
    }
    conc[i] = '\0';

    //printing the result
    printf("Result of concatenation: ");
    for(int k = 0; k<strlen(conc);k++)
    {
        printf("%c",conc[k]);
    }
    printf("\n");

    //free the allocated memory
    free(conc);
    return 0;
}
