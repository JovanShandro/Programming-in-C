#include <stdio.h>

/*
	JTSK-320111
	a1 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

int main()
{
	double result;
	result = (3.0+1)/5;
    printf("The value of 4/5 is %lf\n",result);
    return 0;
}
/*
	the code first printed 0.000 because result was initialized as the division of 2 integers , so the result would also be an integer.
	As C takes the floor value of the division between integers the result would be 0.0 instead of 0.8000. In order to correct the program 
	we turn 3 into a float , so we write 3.0 instead of 3 and we ara ok
*/
