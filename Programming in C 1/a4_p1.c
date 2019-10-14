/*
	JTSK-320111
	a4 p1.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
	int idx;
	/* Loop until end of string */
	for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);
	/* do nothing */
	
	return idx+1;
}

int main() 
{
	
	char line[80];
	while (1) 
	{	
		printf("Enter string:\n");
		fgets(line, sizeof(line), stdin);
		printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));	

	}
}
/*
	what was wrong was the fact that the empty for loop (with no curly brackets) didn't have a ; in the end.
	Because of this fact the loop terminated directly and always printed 0; So to make the program correct
	we only need to add a ; symbol after the empty for loop. I also added a +1 to the idx when returning so
	that it starts counting from 1 and not 0 . This way I think it is better and easier to understand the output :)
*/
