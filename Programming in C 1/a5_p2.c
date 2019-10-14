/*
	JTSK-320111
	a5 p2.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
 	
	char s[50];
	int i, k =0; 	
 	
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1] = '\0';// get rid of the \n in the end
 	
 	for(i =0; i < strlen(s); i++){
 		if(k%2==0)
		{
 			printf("%c\n",s[i]);
		}else
		{
		 	printf(" %c\n",s[i]);
		}
		 k++;
	}
 	
 	return 0;
}
