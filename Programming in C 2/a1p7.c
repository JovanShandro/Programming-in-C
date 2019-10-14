/*
    JTSK-320112
    a1 p7.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>

void set3bits(unsigned char *c, int m, int n, int o)
{
    (*c)|=(1 << m);
    (*c)|=(1 << n);
    (*c)|=(1 << o);
}

int main()
{
    unsigned char n, mask = 128;
    int p, q, r, i = 8;
    scanf("%c",&n);
    scanf("%d",&p);
    scanf("%d",&q);
    scanf("%d",&r);

    printf("The decimal representation is: %d\n",n);
    printf("The binary representation is: ");
    //printing the binary representation also making sure bits are printed
    //m holds a copy of n as we do not want to change n so we use m to print the binary
    //representation of n
     while (i>0)
    {
        if (n & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
        i--;
    }
    printf("\n");
    //setting the bits
    set3bits(&n, p, q, r);
    //reprinting n binary representation after changes
    printf("After setting the bits: ");
    i = 8;
    mask = 128;
     while (i>0)
    {
        if (n & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
        i--;
    }
    printf("\n");
    return 0;
}
