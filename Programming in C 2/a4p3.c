/*
	JTSK-320112
	a4 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//two function pointers to point in the proper
//print funciton and the proper comper function
void (*func) (int *base, int nmemb, int(*compare)(const void*, const void*));
int (*compare) (const void *va, const void *vb);
//function prototyping
int compare1(const void *va, const void *vb);
int compare2(const void *va, const void *vb);
void print_ascending (int *base, int nmemb, int(*compare)(const void*, const void*));
void print_descending (int *base, int nmemb, int(*compare)(const void*, const void*));

int main()
{
	int n, *array;
	char ch;
	scanf("%d",&n);
	//allocating memory
	array = (int *)malloc(sizeof(int)*n);
	if(!array)
		exit(0);
	//read the input array
	for(int i = 0; i<n; i++){
		scanf("%d",&array[i]);
		getchar();
	}
	do{
		scanf("%c",&ch);
		getchar();
		if(ch == 'a')
		{
			func = print_ascending;
			compare = compare1;
		}
		if(ch == 'd')
		{
			func = print_descending;
			compare = compare2;
		}
		if(ch == 'e')
			exit(0);
		func(array, n, compare);
	}while(1);
	//freeing the memory
	free(array);
	return 0;
}
//prints in ascending order
void print_ascending (int *base, int nmemb, int(*compare)(const void*, const void*))
{
	qsort(base, nmemb, sizeof(base[0]), compare1);
	for(int i = 0; i<nmemb; i++)
		printf("%d ",base[i]);
	printf("\n");
}
//prints in descending order
void print_descending (int *base, int nmemb, int(*compare)(const void*, const void*))
{
	qsort(base, nmemb, sizeof(base[0]), compare2);
	for(int i = 0; i<nmemb; i++)
		printf("%d ",base[i]);
	printf("\n");
}
//used to compare in ascending order
int compare1(const void *va, const void *vb)
{
	const int *a = (const int *) va;
	const int *b = (const int *) vb;
	if(*a < *b) return -1;
	else if(*a > *b) return 1;
	else return 0;
}
//used to compare in descending order
int compare2(const void *va, const void *vb)
{
	const int *a = (const int *) va;
	const int *b = (const int *) vb;
	if(*a > *b) return -1;
	else if(*a < *b) return 1;
	else return 0;
}