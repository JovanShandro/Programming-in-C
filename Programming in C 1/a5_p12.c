/*
	JTSK-320111
	a5 p12.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e);

int main(){
    
	char str[80],c,e;
	while(1){
		//reads the string
		fgets(str,sizeof(str),stdin);
		str[strlen(str)-1] = '\0';
		
		if(strcmp(str,"stop")==0){
			break;
		}
		//reads the 2 chars
		scanf("%c",&c);
		getchar();
		scanf("%c",&e);
		
		printf("All '%c' are changed to '%c' \n",c,e);
		printf("The string first was : %s\n",str);
	
		replaceAll(str,c,e);//the change is made
		printf("The string now is : %s\n",str);
		getchar();
	}
	
	return 0;
}

void replaceAll(char *str, char c, char e){
	int i;
	for(i = 0;i < strlen(str);i++){
		if(str[i]==c){
			str[i] = e;
		}
	}
}

