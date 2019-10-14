/*
	JTSK-320111
	a4 p6.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[] ,int n );

int main()
{
	int n,i;
	scanf("%d",&n);
	double a[n];
	
	for(i =0; i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	
	if(n>=6)
	{ 
		printf("sum=%lf\n",sum25(a,n));
	}else
	{
		printf("One or both positions are invalid\n");
	}

	return 0;
}

double sum25(double v[], int n)
{
	double sum=0.0;

	if(n>=6)
	{
		sum = v[2]+v[5];
	}else
	{
		sum = -111;
	}

	return sum;
}
