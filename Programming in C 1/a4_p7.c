/*
	JTSK-320111
	a4 p7.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

float product      (float a, float b);
void  productbyref (float a, float b, float *p);
void  modifybyref  (float *a, float *b);

int main()
{

	float a,b,p;
	scanf("%f",&a);
	scanf("%f",&b);
	
	printf("The result of the product function:\n");
	printf("The product of the 2 floats is: %f\n",product(a,b));
	
	printf("The result of the productbyref function:\n");
	productbyref(a,b,&p);
	printf("The product of the 2 floats is: %f\n",p);

	printf("Before calling the modifybyref function: a = %f and b = %f\n",a,b);
	modifybyref(&a,&b);
	printf("After calling the modifybyref function: a = %f and b = %f\n",a,b);	
	
	printf("From above we can see the effect of the modifybyref funciton and that the first 2 functions have same effects\n");
	return 0;
}

float product(float a, float b)
{	
	return a*b;
}

void productbyref(float a, float b, float *p)
{
	*p = a*b;
}

void modifybyref(float *a, float *b)
{
	*a+=3;
	*b+=11;
}
