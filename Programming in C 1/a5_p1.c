 /*
	JTSK-320111
	a5 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <math.h> 

int main()
{		
	float upper,lower,step;
 	
 	scanf("%f",&lower);
 	scanf("%f",&upper);
 	scanf("%f",&step);
 	
	float i;
 	for(i=lower; i<=upper;i+=step)
	{
 		printf("%f %f %f\n",i,i*i*M_PI,2*M_PI*i);
	}
 	
 	return 0;
}
