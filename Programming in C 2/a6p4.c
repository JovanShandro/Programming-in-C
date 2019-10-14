/*
	JTSK-320112
	a6 p4.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	
   char  file[20],//stores the name of the file
 		   un[20],//stores the entered username
 		   ps[20],//stores the entered password
 		names[30],//string used to get the lines in file 
 		s[30][30];//stores only the usernames 
	
	//positions[i] stores the position of the parser
	//in the file for username s[i] so that we can
	//later on use ftell;
	int positions[30], i = 0;
	//opening the file
	fgets(file, sizeof(file), stdin);
	file[strlen(file)-1] = '\0';
	fp = fopen(file, "r");
	if(!fp)
	{
		printf("%s\n", "Can not open file");
		exit(1);
	}
	//getting the usernames
	while(fgets(names, sizeof(names), fp) != NULL)
	{
		i++;
		names[strlen(names) - 1] = '\0';
		if(i%2 == 1)
		{
			strcpy(s[(i-1)/2],names);
			positions[(i-1)/2] = ftell(fp);
		}
	}
	int size = (i-1)/2;
	
	do
	{
		scanf("%s", un);
		if(strcmp(un, "exit") == 0)
			break;
		scanf("%s", ps);

		//make sure we start at the beginning of the file
		fseek(fp, 0, SEEK_SET);
		
		for(int a = 0; a <= size ;a++)
		{
			if(strcmp(s[a],un)==0)
			{
				//we go to the position of the password
				fseek(fp, positions[a], SEEK_SET);
				//we get the password
			    fgets(names, sizeof(names), fp);
			    names[strlen(names)-1] = '\0';
			    //we compare it with the entered password
				if(strcmp(ps,names) == 0)
					printf("Access to user %s is granted.\n",s[a]);
				else
				printf("Access to user %s is denied.\n",s[a]);
			}
		}
		
	}while(1);
	//after exiting the loop
	printf("%s\n", "Exiting...");
	fclose(fp);
	return 0;
}