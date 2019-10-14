/*
	JTSK-320111
	a3 p9.c
	Jovan Shandro 
	jshandro@jacobs-university.de
*/

#include <stdio.h>

double toFahrenheit(double a){
	return (9.0/5 *a + 32);
}

void BubbleSort(double k[],int length){
	int i,temp, bottom = length - 2;
	int exchanged = 1;
	while(exchanged){	
		exchanged = 0;
		for(i = 0; i<bottom; i++){
			if(k[i]>k[i+1]){
				temp = k[i];
				k[i] = k[i+1];
				k[i+1] = temp;
				exchanged = 1;
			}
		}
		bottom--;	
	}
}

int main(){

	char ch;
	int i,n,k;
	
	scanf("%c",&ch);
	scanf("%d",&n);

	double a[n],sum =0,avg;
	// Read values and find sum
	for(i=0; i<n;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	// Sort the array
	BubbleSort(a,n);
	avg = sum / n;
	// Perform desired operation
	switch(ch){
		case 's':
			printf("The sum of the numbers is %lf\n",sum);
			break;
		case 'p':
			for(k=0; k<n; k++){printf("a[%d] = %lf\n",k,a[k]);}
			break;
		case 't':
			for(k=0; k<n; k++){printf("a[%d] = %lf\n",k,toFahrenheit(a[k]));}
			break;
		default:
			printf("The average is %lf\n",avg);
			break;
	}

	return 0;
}




