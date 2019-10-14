/*
	JTSK-320111 
	a2 p3.c 
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	int w,d,h;
	
	printf("Enter the number of weeks:\n");
	scanf("%d",&w);
	
	printf("Enter the number of days:\n");
	scanf("%d",&d);
	
	printf("Enter the number of hours:\n");
	scanf("%d",&h);
	
	printf("The total number of hours is %d\n",h + d*24 + w*168);
	
	return 0;
}
