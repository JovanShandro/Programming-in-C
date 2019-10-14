/*
	JTSK-320111
	a3 p4.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	int n , a = 1;
	scanf("%d",&n); 
	
	// Case n is not positive
	while(n<=0){
		printf("Please make sure that n is positive\n");
		scanf("%d",&n);		
	}
	
	while(a<=n){		
		if(a==1){
			printf("%d day = %d hours\n",  a, a*24);	
		}else {
			printf("%d days = %d hours\n", a, a*24);
		}
		a++;
	}
	
	return 0;
}
