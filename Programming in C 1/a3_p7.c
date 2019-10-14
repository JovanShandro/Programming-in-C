/*
	JTSK-320111
	a3 p7.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	char ch;
	int i,n;
	
	scanf("%c",&ch);
	scanf("%d",&n);
	
	for(i = 0;i<=n;i++){
		printf("%c\n",ch-i);
	}
	
	return 0;
}
