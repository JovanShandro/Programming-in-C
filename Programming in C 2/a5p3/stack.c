/*
	JTSK-320112
	a5 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include "stack.h"

//pushes n to the stack
void  push  (struct stack *s ,char* n)
{
	if(s->nr_words < 0)
		return;
	s->words[s->nr_words++] = n;
}
//pops only if word on top is qual to n
char* cpop (struct stack *s, char* n)
{
	if(s->nr_words == 0)
		return NULL;
	if(strcmp(s->words[s->nr_words-1],n)==0)
	{
		char * a = s->words[s->nr_words-1];
    	s->words[s->nr_words-1] = NULL;
    	s->nr_words--;
    	return a;
	}
	return NULL;
}
//pops the top word
char* pop (struct stack *s)
{
	if(s->nr_words == 0)
		return NULL;
	char * a = s->words[s->nr_words-1];
    s->words[s->nr_words-1] = NULL;
    s->nr_words--;
    return a;
}
//empties the stack
void  empty (struct stack *s)
{
	if(isEmpty(s))
		return;
	while(!s->nr_words==0)
	{
		pop(s);
	}
}
//checks if the stack is empty
int  isEmpty(struct stack *s)
{
	return s->nr_words == 0;
}
