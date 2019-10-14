/*
    JTSK-320112
    a1 p5.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char n;
    scanf("%c",&n);

    printf("The decimal representation is: %d\n",n);
    printf("The backwards binary representation is: ");
    //printing the inverse binary representation
    while (n)
    {
        if (n & 1)
            printf("1");
        else
            printf("0");
        n >>= 1;
    }
    printf("\n");
    return 0;
}
