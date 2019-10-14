/*
	JTSK-320111
	a5 p11.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char *str, char c);

int main(){
	
	int i;
	char *str,*str2;
	str = (char*)malloc(sizeof(char)*50);
	if(!str)
		return 1;
	
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';//get rid of the '\n'in the end
	
	//allocate mamery for second string and copy the first to the second
	str2 = (char*)malloc(sizeof(char)*strlen(str));
	if(!str2)
		return 1;

	for(i=0;i<strlen(str);i++){
		str2[i]=str[i];
	}
	free(str);
	
	printf("The character '%c' occurs %d times.\n",'b',count_insensitive(str2,'b'));
	printf("The character '%c' occurs %d times.\n",'H',count_insensitive(str2,'H'));
	printf("The character '%c' occurs %d times.\n",'8',count_insensitive(str2,'8'));
	printf("The character '%c' occurs %d times.\n",'u',count_insensitive(str2,'u'));
	printf("The character '%c' occurs %d times.\n",'$',count_insensitive(str2,'$'));

	free(str2);
	return 0;
}

int count_insensitive(char *str, char c){
	int i, counter =0;
	for(i=0; i<strlen(str); i++){
		if(tolower(c)==tolower(str[i])){
			counter++;
		}
	}
	return counter;
}

