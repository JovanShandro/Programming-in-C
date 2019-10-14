/*
	JTSK-320111
	a5 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_consonants(char str[]);

int main(){
	
	char line[100];
	int counter;
	
	while(1){
		fgets(line,sizeof(line),stdin);
		if(line[0] == '\n'){
			exit(1);// end the program if an empty string is entered
		}
		counter = count_consonants(line);
		printf("Number of consonants=%d\n",counter);
	}
	return 0;
}

//this function counts the number of consonants in a string
int count_consonants(char str[]){
	
	int counter=0,i;
	for(i=0;i<strlen(str);i++){
		
		switch(str[i]){
			case 'B':case 'b':
			case 'C':case 'c':
			case 'D':case 'd':
			case 'F':case 'f':
			case 'G':case 'g':
			case 'H':case 'h':
			case 'J':case 'j':
			case 'K':case 'k':
			case 'L':case 'l':
			case 'M':case 'm':
			case 'N':case 'n':
			case 'P':case 'p':
			case 'Q':case 'q':
			case 'R':case 'r':
			case 'S':case 's':
			case 'T':case 't':
			case 'V':case 'v':
			case 'X':case 'x':
			case 'W':case 'w':
			case 'Z':case 'z':
				counter++;
				break;
			default:
				break;
		}
		
	}
	
	return counter;
}
