/*
	JTSK-320111
	a2 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int main(){
	
	double a,b;
	int n,m;
	char c1,c2;
	
	//reads 2 doubles
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	//prints the sum , difference and square of the two doubles
	printf("sum of doubles=%lf\n",		  a+b);
	printf("difference of doubles=%lf\n", a-b);
	printf("square=%lf\n",				  a*a);
	
	//reads the 2 integers
	scanf("%d",&n);
	scanf("%d",&m);
	
	//prints the sum and product of the integers
	printf("sum of integers=%d\n",n+m);
	printf("product of integers=%d\n",n*m);
	
	//reads the 2 chars
	getchar();
	scanf("%c",&c1);
	getchar();
	scanf("%c",&c2);
	
	//prints the sum and product of the chars
	printf("sum of chars=%d\n",     c1+c2);
	printf("product of chars=%d\n", c1*c2);
	printf("sum of chars=%c\n",     c1+c2);
	printf("product of chars=%c\n", c1*c2);

	return 0;
}
