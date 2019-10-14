/*
	JTSK-320111
	a5 p9.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[],int n);

int main(){
	
	int i,n;
	scanf("%d",&n);
	int *array;
	
	array = (int*) malloc(sizeof(int) * n);
	if(array == NULL){
		exit(1);
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	printf("The product of the biggest and the smallest number is : %d\n",prodminmax(array,n));
	free(array);
	return 0;
}

int prodminmax(int arr[],int n){
	int min=arr[0],max=arr[0],i=0;
	
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			max = arr[i];
		}	
	}
	return min*max;	
}
