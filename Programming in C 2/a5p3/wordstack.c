/*
	JTSK-320112
	a5 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

int main()
{

	do
	{
		//will containg the words of the line
		char *str[30];
		//will store the line
		char s[300];
		//create a stack of words
		struct stack my_stack;
		my_stack.nr_words = 0;
		//i will count the number of words
		int i = 0;
		//read the line
		fgets(s,sizeof(s),stdin);
		s[strlen(s)-1] = '\0';
		//check if line equals exit
		if(strcmp(s,"exit") == 0)
			exit(1);
		/*use strtok to split the line into an array of words*/
		char *p = strtok(s," ");
		while(p!= NULL)
		{
			str[i++] = p;
			p = strtok(NULL," ");
		}
		/*checking if it is a palindrome*/

		//if even number of words
		if(i%2 == 0)
		{
			for(int a = 0; a <i/2; a++)
			{
				push(&my_stack,str[a]);
			}
			for(int a = i/2; a<i; a++)
			{
				cpop(&my_stack,str[a]);
			}
			if(isEmpty(&my_stack))
				printf("The sentence is palindromic by words!\n");
			else
				printf("The sentence is not palindromic by words!\n");
		}

		if(i%2 == 1)
		{
			for(int a = 0; a <i/2+1; a++)
			{
				push(&my_stack,str[a]);
			}

			cpop(&my_stack,str[i/2]);

			for(int a = i/2+1; a<i; a++)
			{
				cpop(&my_stack,str[a]);
			}

			if(isEmpty(&my_stack))
				printf("The sentence is palindromic by words!\n");
			else
				printf("The sentence is not palindromic by words!\n");
		}
	}while(1);

	return 0;
}