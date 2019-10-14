/*
	JTSK-320111
	a3 p5.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	int n , a = 1;
	scanf("%d",&n); 
	
	// Case n is not positive		
	for(; n<=0; ){ 
		printf("Input is invalid, reenter value\n");
		scanf("%d",&n);
	}
	
	for(; a<=n; a++){		
		if(a==1){
			printf("%d day = %d hours\n",a,a*24);	
		}else {
			printf("%d days = %d hours\n",a,a*24);
		}
	}
	
	return 0;
}
