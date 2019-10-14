/*
	JTSK-320111
	a5 p6.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void find2GreatestNumbers(int arr[],int size);

int main(){
	
	int *array,n,i;
	printf("How many numbers do you want to enter?\n");
	scanf("%d",&n);
	
	//dynamic memory allocation
	array = (int*) malloc(sizeof(int) * n);
	if(array==NULL){
		exit(1);
	}
	
	for(i=0;i<n;i++){
		printf("Input number %d:\n", i+1); 
		scanf("%d", &array[i]);
	}
	
	find2GreatestNumbers(array,n);
	
	free(array);
	return 0;
}

//finds the 2 greatest numbers in the array
void find2GreatestNumbers(int arr[],int size){
	
	if(size <2){
		printf("The number of integers you entered is lower than 2!!\n");
		return;
	}
	int nr1, nr2,temp,i;
	nr1 = arr[0];
	nr2 = arr[1];
	
	if(nr1 < nr2){// we make sure that nr1 is bigger than nr2
		temp = nr1;
		nr1 = nr2;
		nr2 = temp;
	}
	for(i=0;i<size;i++){
		if(arr[i]>nr1){
			nr2 = nr1;
			nr1 = arr[i];
		}else if (arr[i]>nr2){
			nr2 = arr[i];
		}
	}
	printf("The biggest number is: %d\n",nr1);
	printf("The second biggest number is: %d\n",nr2);
}

