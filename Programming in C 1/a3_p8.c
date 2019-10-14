/*
	JTSK-320111
	a3 p8.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	char ch;
	int i,n;
	
	scanf("%c",&ch);
	scanf("%d",&n);

	if((n>32 || n<7) || !(ch>=97 && ch<=122)){
	
		if(!(ch>=97 && ch<=122)){
			printf("You must enter a lower case letter\n");
		}
			
		if(n>32 || n<7){
			printf("n must be between 7 and 32 \n");
		}	
		return 1;
	}
	
	for(i = 0;i<=n;i++){
		printf("%c\n",ch-i);
	}
	
	return 0;
}
