/*
	JTSK-320111
	a6 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size);

int main(){
	int j,i,n;
	scanf("%d",&n);
    float *arr	;
    
    arr = (float*)malloc(sizeof(float)*n);
    if(!arr)
		return 1;
    //gets the inputs
    for(j=0;j<n;j++){
    	scanf("%f",&arr[j]);
	}
   
    printf("Before:\n");//the array before being divided by 5
    for(i=0;i<n;i++){
    	
    	printf("%.3f",arr[i]);
    	printf(" ");
    	
		if(i == n-1){
    		printf("\n");
		}
	}
	divby5(arr,n);
     	
	printf("After:\n");//the array after being divided by 5
     	
	for(i=0;i<n;i++){
		printf("%.3f",arr[i]);
    	printf(" ");
    	
		if(i == n-1){
    		printf("\n");
		}
	}
	free(arr);
	return 0;
}

void divby5(float arr[], int size){
	int i;
	for (i = 0; i<size; i++){
		arr[i] = arr[i]/5.0;
	}
}

