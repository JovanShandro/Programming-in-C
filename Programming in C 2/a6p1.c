/*
	JTSK-320112
	a6 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	FILE *fp;
	int count = 0;//counts the words
	char str[40]; //holds the name of the file
	char ch;      // used to iterate through every char in the file

	//read the name and open file
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	fp = fopen(str,"r");
	if(!fp)
	{
		printf("%s\n", "Can not open file!\n");
		exit(1);
	}
	//iterate to count the number of words
	while((ch = getc(fp)) != EOF)
	{
		if(ch == ' ' || ch == ',' || ch == '.' || ch == '?' || ch == '!'|| ch == '\t' || ch == '\r' || ch == '\n')
		{
			while((ch == ' ' || ch == ',' || ch == '.' || ch == '?' || ch == '!'|| ch == '\t' || ch == '\r' || ch == '\n') && ch != EOF)
			ch = getc(fp);
			count++;
		}
	}
	//print the result and close the file
	printf("The file contains %d words\n",count);
	fclose(fp);
	return 0;
}