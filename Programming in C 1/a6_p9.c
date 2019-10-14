/*
	JTSK-320111
	a6 p9.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char str1[50],str2[50];
	FILE *f1,*f2,*f3;
	double a,b,sum,prod,dif,div;
	
	//reads the name of the first file and gets rid of the \n in the end
	printf("Enter the name of the first file:\n");
	fgets(str1,sizeof(str1),stdin);
	str1[strlen(str1)-1] = '\0';
	
	//reads the name of the secind file and gets rid of the \n in the end
	printf("Enter the name of the second file:\n");
	fgets(str2,sizeof(str2),stdin);
	str2[strlen(str2)-1] = '\0';
	
	//opens the first file
	f1 = fopen("double1.txt","r");
	if(f1 == NULL){
		printf("File does not exist!\n");
		exit(1);
	}
	
	//opens the second file
	f2 = fopen("double2.txt","r");
		if(f2 == NULL){
		printf("File does not exist!\n");
		exit(1);
	}
	
	//open the third file 
	f3 = fopen("results.txt","w");
	if(f3==NULL){
		exit(1);
	}

	fscanf(f1,"%lf",&a);
	fscanf(f2,"%lf",&b);
	
	sum = a+b;
	prod =a*b;
	div = a/b;
	dif = a-b;
	
	fprintf(f3,"The sum is: %lf\n",sum);
	fprintf(f3,"The difference is: %lf\n",dif);
	fprintf(f3,"The product is: %lf\n",prod);
	fprintf(f3,"The result of the division is: %lf\n",div);

	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}
