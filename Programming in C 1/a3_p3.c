/*
	JTSK-320111
	a3 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){

	char ch;
	scanf("%c",&ch);
	
	// Getting the ascii code of the char	
	int a = (int)ch;
	
	if(a >= 48 && a<=57){
		printf("%c is a digit\n",ch);
	}else if ( (a >=65 && a<=90) || (a >=97 && a <=122)){
		printf("%c is a letter\n",ch);
	}else{
		printf("%c is some other symbol\n",ch);
	}
	
	return 0;	
}
