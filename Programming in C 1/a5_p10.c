/*
	JTSK-320111
	a5 p10.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a,float b, float *prod, float *div,float *pwr, float *invb);

int main(){
	
	float a,b,prod,div,pwr,invb;
	scanf("%f",&a);
	scanf("%f",&b);
	
	proddivpowinv(a,b,&prod,&div,&pwr,&invb);
	
	//now we test the values of each of the variables
	printf("The value of a: %f\n",a);
	printf("The value of b: %f\n",b);
	printf("The value of a*b: %f\n",prod);
	printf("The value of a/b: %f\n",div);
	printf("The value of a to the power b: %f\n",pwr);
	printf("The value of the inverse of b: %f\n",invb);
	
	return 0;
}

void proddivpowinv(float a,float b, float *prod, float *div,float *pwr, float *invb){
	*prod = a*b;
	*div = a/b;
	*pwr = (float)pow(a,b);
	*invb = 1/b;
}
