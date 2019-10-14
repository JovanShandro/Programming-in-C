/*
    JTSK-320112
    a1 p2.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#define LAST_BIT(A) {\
        int  b = A & 1;\
        if(b>0) printf("1\n");\
            else printf("0\n");\
        }

int main()
{
    //variable declaration
    unsigned char ch;
    //reading the input
    scanf("%c",&ch);
    //printing the decimal representation and right most bit
    printf("The decimal representation is: %u\n", (unsigned int)(ch));
    printf("The least significant bit is: ");
    LAST_BIT(ch);

    return 0;
}
