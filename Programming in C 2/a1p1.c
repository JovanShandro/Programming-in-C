/*
    JTSK-320112
    a1 p1.c
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(A, B, type)  {type a1 = A; A = B; B = a1;}

int main()
{
	// I used double instead of float as I has had precision issues on grader
	int a, b;
	double c, d;

	//reading the numbers
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);

	SWAP(a, b, int);
	SWAP(c, d, double);

	printf("After swapping:\n");
	printf("%d\n%d\n%.6lf\n%.6lf\n",a,b,c,d);

	return 0;
}
