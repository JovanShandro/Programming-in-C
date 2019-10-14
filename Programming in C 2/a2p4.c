/*
    JTSK-320112
    a2 p4.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void read(int ***a, int row, int col, int depth);
void print_sections(int ***, int row, int col, int depth);

int main()
{
    int ***a, row, col, depth;
    //read the dimensions
    scanf("%d",&row);
    scanf("%d",&col);
    scanf("%d",&depth);
    //allocate memory
    a = (int ***)malloc(sizeof(int**) * row);
    if(!a)
        exit(1);
    for(int i = 0; i<row; i++)
    {
        a[i] = (int**)malloc(sizeof(int*) * col);
        if(!a[i])
            exit(1);
        for(int j = 0; j<col; j++)
        {
            a[i][j] = (int *)malloc(sizeof(int) * depth);
            if(!a[i][j])
                exit(1);
        }
    }
    //read the matrix
    read(a, row, col, depth);
    //print the subsections
    print_sections(a, row, col, depth);
    //free the memory
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);
    return 0;
}

void read(int ***a, int row, int col, int depth)
{
    for(int i = 0; i<row; i++)
        for(int j = 0; j<col; j++)
            for(int k =0; k<depth; k++)
            {
                scanf("%d",&a[i][j][k]);
            }
}
void print_sections(int ***a, int row, int col, int depth)
{
    for(int i = 0; i<depth; i++)
    {
        printf("Section %d:\n",i+1);
        for(int j = 0; j<row; j++)
        {
            for(int k = 0; k<col; k++)
            {
                printf("%d ",a[j][k][i]);
            }
            printf("\n");
        }
    }
}
