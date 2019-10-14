/*
    JTSK-320112
    a2 p1.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // to store the size of the array
    float *arr, *p;
    scanf("%d", &n);

    arr = (float*)malloc(sizeof(float)*n);
    if(!arr)
        exit(1);

    //reading the array
    for(int i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
    }
    //the empty loop will increment the position of p
    // till it reaches the negative element
    for(p = arr; *p >=0 ; p++);

    printf("Before the first negative value: %ld elements\n", p-arr);
    free(arr);
    return 0;
}
