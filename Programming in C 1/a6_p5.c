/*
	JTSK-320111
	a6 p5.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

double scalar_prod(double v[], double w[],int n);
double smallest(double a[], int n);
double largest (double a[], int n);
int smallest_index(double a[], int n);
int largest_index (double a[], int n);

int main(){
	
	int i,n;
	scanf("%d",&n);
	double v[n];
	double w[n];
	
	for(i=0;i<n;i++){
		scanf("%lf",&v[i]);
	}
	for(i=0;i<n;i++){
		scanf("%lf",&w[i]);
	}
	//calculates and prints the scalar product of the vectors
	printf("Scalar product=%lf\n",scalar_prod(v,w,n));
	printf("The smallest = %lf\n",smallest(v,n));
	//printing the largest and smallest of each vector and their indexes
	printf("Position of smallest = %d\n",smallest_index(v,n));
	printf("The largest = %lf\n",largest(v,n));
	printf("Position of largest = %d\n",largest_index(v,n));
	printf("The smallest = %lf\n",smallest(w,n));
	printf("Position of smallest = %d\n",smallest_index(w,n));
	printf("The largest = %lf\n",largest(w,n));
	printf("Position of largest = %d\n",largest_index(w,n));
	
	return 0;
}

double scalar_prod(double v[], double w[],int n){
	
	int i;
	double prod =0;
	
	for(i=0;i<n;i++){
		prod+=(v[i]*w[i]);
	}
	
	return prod;
}

double smallest(double a[],int n){
	int i;
	double min = a[0];
	for(i =0; i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	return min;
}

double largest(double a[],int n){
	int i;
	double max = a[0];
	for(i =0; i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}

int smallest_index(double a[] , int n){
	int i,minindex;
	double min = a[0];
	for(i =0; i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	
		for(i=0;i<n;i++){
		if(a[i] == min){
			minindex = i;
			break;
		}
	}
	return minindex;
}

int largest_index(double a[], int n){
	int i,maxindex;
	double max = a[0];
	for(i =0; i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i] == max){
			maxindex = i;
			break;
		}
	}
	
	return maxindex;
}
