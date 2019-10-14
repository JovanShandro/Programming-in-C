 /*
	JTSK-320111
	a3 p6.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main() {
	
	float x;
	int n,i;
	
	scanf("%f",&x);
	scanf("%d",&n);
	
	// Case n is not positive
	while(n<=0){
		printf("Input is invalid, reenter value\n");
		scanf("%d",&n);		
	}
	// Printing loop
	for(i = 0; i < n; i++){
		printf("%f\n",x);
	}
	
	return 0;
}
