/*
	JTSK-320111 
	a2 p5.c 
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	int a;
	scanf("%d",&a);
	printf("a = %d\n",a);
	
	int *ptr_a = &a;
	printf("The address value of a is %p\n",ptr_a);
	
	//increasing the value of a by 5 using the pointer
	*ptr_a+=5;
	
	printf("The modified value of a is %d\n",		a);
	printf("The address of the variable a is %p\n", ptr_a);
	return 0;
}
