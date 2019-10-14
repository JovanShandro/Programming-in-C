/*
	JTSK-320111
	a6 p3.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_lower(char *str);

int main(){
	
	char str[50];
	
	while(1){
		
		fgets(str,sizeof(str),stdin);
		str[strlen(str)-1] = '\0';
		
		if(str[0]=='\0'){//checks if the string is empty
			break;
		}
		printf("The number of lowercase characters is %d.\n",count_lower(str));
		
	}
	
	return 0;
}

//counts the number of lowercase chars
int count_lower(char *str){
	int i,a, counter =0;
	for(i=0; i<strlen(str);i++){
		a = (int)str[i];
		if(a>=97 && a<=122){
			counter++;
		}
	}	
	return counter;
}
