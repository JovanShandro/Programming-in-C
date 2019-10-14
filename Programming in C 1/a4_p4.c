/*
	JTSK-320111
	a4 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c);

int main()
{	
	int n, m;
	char c;

	scanf("%d",&n);
	scanf("%d",&m);
	// Clear \n char
	getchar();
	scanf("%c",&c);

	printf("Printed form : \n");
	print_form(n, m, c);	
	
	return 0;
}

void print_form(int n, int m, char c)
{	
	int i,j;
	for(i = m; i <= n+m-1; i++)
	{
		for(j = 0 ;j < i ;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
}
