/*
	JTSK-320111
	a5 p7.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_matrix(int m[30][30],int n);
void print_UnDiag(int m[30][30],int n);

int main(){
	
	int i,j,n, matrix[30][30];;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("The entered matrix is:\n");
	print_matrix(matrix,n);
	
	printf("Under the main diagonal:\n");
	print_UnDiag(matrix,n);
	return 0;
}
//printf the matrix in form
void print_matrix(int m[30][30],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}

//prints the elements below the main diagonal
void print_UnDiag(int m[30][30],int n){	
	int i,j;
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			if(i>j){
				printf("%d ",m[i][j]);
			}
		}
	}
	printf("\n");
}
