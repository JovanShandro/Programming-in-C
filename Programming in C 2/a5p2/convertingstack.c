/*
	JTSK-320112
	a5 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

struct stack my_stack;

int main()
{
	unsigned int n, m, r;
	scanf("%d",&n);
	m = n;
	my_stack.count = 0;
	while(m>0)
	{
		r = m%2;
		push(&my_stack, r);
		m/=2;
	}
	printf("The binary representation of %d is ",n);
	while(my_stack.count > 0)
	{
		printf("%d",pop(&my_stack));
	}
	printf(".\n");

	return 0;
}