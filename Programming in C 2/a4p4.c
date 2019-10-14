/*
	JTSK-320112
	a4 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//declaring the struct
struct person
{
	char name[30];
	int age;
};
//function prototyping
void print_people(struct person *, int n);
void bubble_sort(struct person *, int n, int (*compare)(struct person , struct person));
int compare_by_name(struct person , struct person );
int compare_by_age(struct person , struct person );

int main()
{
	
	int n;
	scanf("%d",&n);//read size of array
	getchar();
	struct person *people;
	//allocating memory
	people = (struct person*) malloc(sizeof(struct person) * n);
	if(!people)
		exit(0);

	for(int i = 0; i<n; i++)
	{
		//read the data
		scanf("%s",people[i].name);
		scanf("%d",&people[i].age);
	}
	//sort by name
	bubble_sort(people, n, compare_by_name);
	print_people(people, n);
	//sort by age
	bubble_sort(people, n, compare_by_age);
	print_people(people, n);

	free(people);
	return 0;
}
//the sorting function
void bubble_sort(struct person *p, int n, int (*compare)(struct person, struct person))
{
	int exchanged = 1, i = 0, bottom = n-2;
	int temp;
	char tempname[40];
	while(exchanged)
	{
		exchanged = 0;
		for(i = 0; i<=bottom; i++)
		{
			if(compare(p[i],p[i+1]))
			{
				temp = p[i].age;
				p[i].age = p[i+1].age;
				p[i+1].age = temp;

				strcpy(tempname, p[i].name);
				strcpy(p[i].name, p[i+1].name);
				strcpy(p[i+1].name, tempname);
				exchanged = 1;
			}
		}
		bottom--;
	}
}
//prints the names and ages of the people
void print_people(struct person *people, int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("{%s, %d}; ",people[i].name, people[i].age);
	}
	printf("\n");
}
//compare functions
int compare_by_name(struct person p1, struct person p2)
{
	if(strcmp(p1.name,p2.name) != 0) 
		{	if(strcmp(p1.name, p2.name) < 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	else return (p1.age > p2.age);
}

int compare_by_age(struct person p1, struct person p2)
{
	if(p1.age != p2.age) return (p1.age > p2.age);
	else 
	{
		if(strcmp(p1.name, p2.name) < 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
	}
}
