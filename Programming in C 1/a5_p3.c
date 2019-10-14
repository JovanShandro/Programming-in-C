/*
	JTSK-320111
	a5 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num);
float getHighest(float arr[],int num);
float getLowest(float arr[],int num);
float sum(float arr[], int num);

int main(){
	
	float n[15],a;
	int i=0,count =0;;
	char c;
	
	//getting the input
	a=0;
	while(a>=0)
	{
		if(i>=15)
		{
			break;
		} 
		scanf("%f",&a);
		if(a>=0)
		{
			n[i]=a;
			count++;// this variable counts the number of floats entered
		}
		i++;
	}
	getchar();
	scanf("%c",&c);
	
	switch(c){
		case 'm':
			printf("The goemetric mean is %f\n",geometric_mean(n,count));
			break;
		case 'h':
			printf("The highest number is %f\n",getHighest(n,count));
			break;
		case 'l':
			printf("The lowest number is %f\n",getLowest(n,count));
			break;
		case 's':
			printf("The sum of the numbers is %f\n",sum(n,count));
			break;
		
	}

	return 0;
}

//calculate the geometric mean of the elements
float geometric_mean(float arr[], int num)
{
	int i;
	float product = 1;
	for(i=0; i<num; i++)
	{
		product*=arr[i];
	}
	if(num==0)
	{
		return 0;
	}	
	return (float)pow(product,(1.0/num));
}

//returns the largest element
float getHighest(float arr[],int num)
{
	float max = arr[0];
	int i;
	for(i=0; i<num; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	if(num==0)
	{
		return 0;
	}
	return max;
}

//returns the lowest element
float getLowest(float arr[],int num)
{
	float min = arr[0];
	int i;
	for(i=0; i<num; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	if(num==0)
	{
		return 0;
	}
	return min;
}

//calculates the sum of elements
float sum(float arr[], int num)
{
	int i;
	float sum =0;
	for(i=0; i<num; i++)
	{
		sum+=arr[i];
	}
	if(num==0)
	{
		return 0;
	}
	
	return sum;
}
