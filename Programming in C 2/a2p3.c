/*
    JTSK-320112
    a2 p3.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void read(int **a, int n, int m);
void product(int **a, int **b, int **c, int n, int m, int p);
void print(int**a, int n, int m);

int main()
{
    int n, m, p;
    int **a, **b, **c;
    //reading the dimensions
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
    //allocating memory for the first matrix
    a = (int**)malloc (sizeof(int*) * n);
    if(!a)
        exit(1);
    for(int i = 0; i<n; i++)
    {
        a[i] = (int*)malloc (sizeof(int) * m);
        if(!a[i])
            exit(1);
    }
    //allocating second matrix
    b = (int**)malloc (sizeof(int*) * m);
    if(!b)
        exit(1);
    for(int i = 0; i<m; i++)
    {
        b[i] = (int*)malloc (sizeof(int) * p);
        if(!b[i])
            exit(1);
    }
    //allocating product matrix
    c = (int**)malloc (sizeof(int*) * n);
    if(!c)
        exit(1);
    for(int i = 0; i<n; i++)
    {
        c[i] = (int*)malloc (sizeof(int) * p);
        if(!c[i])
            exit(1);
    }
    //read the matrices
    read(a,n,m);
    read(b,m,p);
    //calculate the product
    product(a,b,c,n,m,p);
    //print the resulting matrices
    printf("Matrix A:\n");
    print(a,n,m);
    printf("Matrix B:\n");
    print(b,m,p);
    printf("The multiplication result AxB:\n");
    print(c,n,p);
    //free the allocated memory
    for(int i = 0; i<n; i++)
        free(a[i]);
    free(a);
    //second matrix
    for(int i = 0; i<m; i++)
        free(b[i]);
    free(b);
    //the product matrix
    for(int i = 0; i<n; i++)
        free(c[i]);
    free(c);
    return 0;
}
//reads matrix a with dimensions n by m
void read(int **a, int n, int m)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
//calculate a*b and save it to c
void product(int **a, int **b, int **c, int n, int m, int p)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<p; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k<m; k++)
            {
                c[i][j] +=(a[i][k]*b[k][j]);
            }
        }
    }
}
//prints elements of the matrix a
void print(int**a, int n, int m)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
