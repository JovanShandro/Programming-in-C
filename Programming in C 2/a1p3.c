/*
    JTSK-320112
    a1 p3.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>

//macro to find minimum of 2 numbers
#define MIN2(a, b) ((a<b)?a:b)
//macro to find minimum of 3 numbers
#define MIN(p, q ,r) ((MIN2(p,q) < MIN2(q,r))?MIN2(p,q):MIN2(q,r))
//macro to find maximum of 2 numbers
#define MAX2(a, b) ((a>b)?a:b)
//macro to find maximum of 3 numbers
#define MAX(p, q ,r) ((MAX2(p,q) > MAX2(q,r))?MAX2(p,q):MAX2(q,r))
//macro to find mid range of 3 numbers
#define MID_RANGE(a,b,c) (MAX(a,b,c)/2.0 + MIN(a,b,c)/2.0)

int main()
{
    int m,n,c;
    //reading the input
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&c);
    //printing the mid range
    printf("The mid-range is: %.6f\n", MID_RANGE(m,n,c));
    return 0;
}
