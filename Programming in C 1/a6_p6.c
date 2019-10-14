/*
	JTSK-320111
	a6 p6.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

void print_downwards(int n);

int main(){
	
	int n;
	scanf("%d",&n);
	print_downwards(n);
	return 0;
}

void print_downwards(int n){
	if(n==1){
		printf("1");
	}else{
		printf("%d ",n);
		print_downwards(n-1);
	}
}
