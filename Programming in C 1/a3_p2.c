/*
	JTSK-320111
	a3 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	// Simple if statement
	if(a%14 == 0){
		printf("The number is divisible by 2 and 7\n");
	}else{
			printf("The number is NOT divisible by 2 and 7\n");
	}

	return 0;
}

