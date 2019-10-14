/*
	JTSK-320112
	a5 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#ifndef STACK_H
#define STACK_H

struct stack 
{
	unsigned int nr_words;
	char *words[30];//container
};
//function declarations
void  push  (struct stack *s,char* n);
char* pop   (struct stack *s);
//conditional pop if n is on top
char* cpop   (struct stack *s, char* n);
void  empty (struct stack *s);
int   isEmpty(struct stack *s);

#endif
