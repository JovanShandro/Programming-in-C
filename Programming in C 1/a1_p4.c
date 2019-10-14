/*
	JTSK-320111 
	a1 p4.c 
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	// assigning the values	
	int x = 17, y = 4;
	
	//printing the values
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	
	//computing and printing the sum, product, difference, division 
	// and the remainder after dividing x with y
	int sum = x+y;
	printf("sum=%d\n",sum);
	
	int product= x*y;
	printf("product=%d\n",product);
	
	int difference = x-y;
	printf("difference=%d\n",difference);
	
	float division = (float)x/y;
	printf("division=%f\n",division);
	printf("remainder of division=%d\n",x%y);
	
	return 0;
}
