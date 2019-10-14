/*
	JTSK-320111
	a6 p7.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int isPrime(int n,int i);

int main(){
	
	int x;
	scanf("%d",&x);
	if(isPrime(x,x/2)){
		printf("%d is prime\n",x);
	}else{
		printf("%d is not prime\n",x);
	}
	
	return 0;
}

//the function checks whether n is prime or not 
int isPrime(int n,int i){
	if(i<1){
		return 0;
	}else if(i==1){
		return 1;
	}else{
		if(n%i==0){
			return 0;
		}else{
			isPrime(n,i-1);
		}
	}
	//this is just to remuve the error in compiling at grader
	return 1;
}
