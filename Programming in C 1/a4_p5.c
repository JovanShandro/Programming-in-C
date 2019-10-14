/*
	JTSK-320111
	a4 p5.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

float sum(float a[], int counter);
float avg(float a[], int counter);

int main(){
	
	float a[10];
	int counter, i = 1, pass = 0;
	// Get first value
	scanf("%f",&a[0]);
	// Check validity
	if(a[0] == -99.0)
	{
		pass = 1;
		counter++;
	}

	while(a[i-1]!= -99.0 && !pass)
	{
		if(i>=10){
			break;
		}
		// Read array entry	
		scanf("%f",&a[i]);
		// Check validity
		if(a[i] != -99.0)
		{
			counter++;
		}
		i++;
	}
	printf("sum = %f\naverage = %f\n",sum(a,counter),avg(a,counter));
	
	return 0;
}

float sum(float a[], int counter){
	int i,s=0;
	for (i =0; i<counter;i++){
		s+=a[i];
	}
	return s;
}
float avg(float a[], int counter){
	int i,s=0;
	for (i =0; i<counter;i++){
		s+=a[i];
	}if(counter ==0){
		return 0;
	}
	return (float)s/counter;
}
