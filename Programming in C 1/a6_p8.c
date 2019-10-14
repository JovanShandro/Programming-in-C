/*
	JTSK-320111
	a6 p8.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fp1,*fp2;
	char ch1,ch2;
	fp1 = fopen("chars.txt","r");//opens the file to read the characters
	if(fp1== NULL){
		printf("The file chars.txt does not exist!\n");
		exit(1);
	}
	
	fp2 = fopen("codesum.txt","w");//opens the files to write the chars, if file does not exit it is created
	if(fp2==NULL){
		printf("A problem occured with the codesum.txt file\n");
		exit(1);
	}
	
	ch1 = getc(fp1);
	ch2 = getc(fp1);
	fprintf(fp2,"%d",(int)ch1 + (int)ch2);
	
	//closing both files
	fclose(fp1);
	fclose(fp2);

	return 0;
}
