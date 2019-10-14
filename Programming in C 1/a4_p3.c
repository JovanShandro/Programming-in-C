/*
	JTSK-320111
	a4 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

float to_pounds (int kg, int g);

int main() 
{
	
	//declaring the variables
	int kg,g;	
	
	//getting the input from the user
	scanf("%d",&kg);
	scanf("%d",&g);
	
	//the value in pounds is printed
	printf("Result of conversion: %f\n",to_pounds(kg,g));
	
	return 0;
}

float to_pounds(int kg, int g)
{
	float pounds = kg *2.2 + g *2.2*0.001;
	return pounds;
}
