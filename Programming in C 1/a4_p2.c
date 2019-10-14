/*
	JTSK-320111
	a4 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm);

int main() 
{	
	int cm;
	// The user enters the value in cm
	scanf("%d",&cm);
	
	// The value in km is printed
	printf("Result of conversion: %f\n",convert(cm));
		
	return 0;
}

float convert (int cm)
{
	float km = (float) cm / 100000;
	return km;
}
