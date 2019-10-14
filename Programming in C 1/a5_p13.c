/*
	JTSK-320111
	a5 p13.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppcase(char *str);
void lowcase(char *str);

int main(){
	
	char str[90];
	while(1){
		fgets(str,sizeof(str),stdin);
		str[strlen(str)-1] = '\0';
		
		if(strcmp(str,"exit")==0){
			break;
		}
		uppcase(str);
		printf("uppcase=%s\n",str);
		lowcase(str);
		printf("lowcase=%s\n",str);
		
	}
	
	return 0;
}

//turns every char from lowercase to upper 
void uppcase(char *str){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i] >= 97 && str[i]<=122){
			str[i] = toupper(str[i]);
		}
	}
}

//turns every char from uppercase to lowercase
void lowcase(char *str){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i] >= 65 && str[i]<=90){
			str[i] = tolower(str[i]);
		}
	}
}
