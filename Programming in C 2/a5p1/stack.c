/*
	JTSK-320112
	a5 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"
//pushes an int in the stack 
//prints Stack Overflow if there are more than 12 elems.
void push  (struct stack *s,int n)
{
	if(s->count ==12)
	{
		printf("%s\n", "Stack Overflow");
		return;
	}
	s->array[s->count++] = n;
}
//pops and returns the top element
int pop (struct stack *s)
{
	if(s->count == 0)
	{
		printf("%s\n", "Stack Underflow");
		return 0;
	}
	int a = s->array[s->count-1];
	s->array[s->count-1] = 0;
	s->count--;
	return a;
}
//resets the count to 0 and pops every element
void empty (struct stack *s)
{
	if(isEmpty(s))
		return;
	while(!s->count==0)
	{
		printf("%d ", pop(s));
	}
	printf("\n");
}
//checks is list is empty
int isEmpty(struct stack *s)
{
	return (s->count == 0);
}
