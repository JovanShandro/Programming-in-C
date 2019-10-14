/*
	JTSK-320112
	a4 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//functions prototyping
void print_uppercase(char *);
void print_lowercase(char *);
void print_mix(char *);
void endloop(char *);
//array of function pointer 
void (*func[4]) (char *)= {print_uppercase, print_lowercase, print_mix, endloop};

int main()
{
	char string[1024];
	int n;
	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1] = '\0';
	//the infinite loop
	do
	{
		scanf("%d",&n);
		n--; //adjust the value of n so that the proper func is called
		(func[n])(string);//call the proper function
	}while(1);

	return 0;
}
//prints with all upper cases
void print_uppercase(char * string)
{
	int n = (int) strlen(string);
	char ch;
	for(int i = 0; i<n; i++)
	{	
		ch = string[i];
		printf("%c",(ch>=97 && ch<=122) ? (ch-=32) :ch);
	}
	printf("\n");
}
//prints with all lower cases
void print_lowercase(char * string)
{
	int n = (int) strlen(string);
	char ch;
	for(int i = 0; i<n; i++)
	{	
		ch = string[i];
		printf("%c",(ch>=65 && ch<=90)? (ch+=32): ch);
	}
	printf("\n");
}
//prints with switched cases
void print_mix(char *string)
{
	int n = (int) strlen(string);
	char ch;
	for(int i = 0; i<n; i++)
	{	
		ch = string[i];
		printf("%c",(ch>=97 && ch<=122) ?(ch-=32) : ((ch>=65 && ch<=90) ? (ch+=32) : ch));
	}
	printf("\n");	
}
//funciton to end the program
void endloop(char * string)
{
	exit(0);
}