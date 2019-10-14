/*
	JTSK-320111 
	a2 p6.c 
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	double x,y;
	scanf("%lf",&x);
	scanf("%lf",&y);
	
	double *ptr_one = &x,
	       *ptr_two = &x, 
		   *ptr_three = &y;
	
	printf("The value of ptr_one is %p\n",   ptr_one);
	printf("The value of ptr_two is %p\n",   ptr_two);
	printf("The value of ptr_three is %p\n", ptr_three);
	printf("As we can see ptr_one and ptr_two store the same address and ptr_three a different one");

	return 0;
}
