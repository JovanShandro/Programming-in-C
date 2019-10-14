/*
	JTSK-320111
	a6 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size);

int main(){
	int i;
    float arr[] = {5.5,6.5,7.75,8.0,9.6,10.36};
   
	printf("Before:\n");//the array before being divided by 5
    for(i=0;i<6;i++){
    	
    	printf("%.3f",arr[i]);
    	printf(" ");
    	
		if(i==5){
    		printf("\n");
		}
	}
	divby5(arr,6);
     	
	printf("After:\n");//the array after being divided by 5
     	
	for(i=0;i<6;i++){
    	
		printf("%.3f",arr[i]);
    	printf(" ");
    	
		if(i==5){
    		printf("\n");
		}
	}
	return 0;
}

void divby5(float arr[], int size){
	int i;
	for (i = 0; i<size; i++){
		arr[i] = arr[i]/5.0;
	}
}

