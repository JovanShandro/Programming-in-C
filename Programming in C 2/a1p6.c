/*
    JTSK-320112
    a1 p6.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char n, mask = 128;
    int i = 8;
    scanf("%c",&n);

    printf("The decimal representation is: %d\n",n);
    printf("The binary representation is: ");
    //printing the binary representation also making sure bits are printed
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
