/*
	JTSK-320111 
	a1 p3.c 
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	float result;
	int a = 5;
	float b = 13.5;
	
	result = a / b;
	
	printf("The result is %f\n",result);	
	return 0;
}

/*
	There were many errors in the code which resulted in a compile error. Firstly 
	we need the # symbol before the include command, secondly the variable b must 
	be declared as a float as it's not an integer. Lastly the number that should be 
	printed is float so we should use %f instead of %d in the printf function.
*/
