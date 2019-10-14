/*
	JTSK-320111
	a6 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

void print_pattern(int n, char ch);

int main(){
	
	int n;
	char ch;
	
	//getting the input
	scanf("%d",&n);
	getchar();
	scanf("%c",&ch);
	
	print_pattern(n,ch);//prints the pattern
	
	return 0;
}

void print_pattern(int n, char ch){
	int i,j;
	for(i=n;i>0;i--){
		for(j=0;j<i;j++){
			printf("%c",ch);//prints a row of chars
		}
		printf("\n");//end of a row
	}
}
