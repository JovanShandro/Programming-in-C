 #include <stdio.h>
 
 /*
	JTSK-320111
	a1 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

int main(){
	
	int result;
	result = (2 + 7) * 9 /3;
	printf("The result is %d\n",result);
	return 0;
}
/*
	The code didn't work at first because we need to specify in the printf() function as the second argument the value we want to
	print instead of %d, which is the value stored by the variable result. So to correct the problem we only need to add result as the second argument of printf().
	Since it first did't know which value to print it printed a value previously stored in the memory
*/
