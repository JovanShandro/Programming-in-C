/*
	JTSK-320111
	a4 p9.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char one[100],two[100],line3[100],conc[200],ch;
	int i,j;
	// Read strings
	fgets(one, sizeof(one), stdin);
	fgets(two,sizeof(two),stdin);

	scanf("%c",&ch);
	printf("length1=%lu\n",strlen(one)-1);
	printf("length2=%lu\n",strlen(two)-1);
	
	for(i =0; i<strlen(one)-1;i++){
		conc[i] = one[i];
	} 
	
	i =strlen(one)-1;
	
	for(j =0; two[j]!='\n'; j++, ++i){
		conc[i] = two[j];
	}
	conc[i] = '\0';
	
	printf("concatenation=%s\n",conc);
	
	for(i =0; i<strlen(two);i++){
		line3[i] = two[i];
	}
	line3[i] = '\0';
	printf("copy=%s",line3);
	
	if(strcmp(one,two)>0)
	{
		printf("one is larger than two\n");
	}else if (strcmp(one,two) <0)
	{
		printf("one is smaller than two\n");
	}else 
	{
		printf("one is equal to two\n");
	}

	int h, g=0;
	for(h=0; h < strlen(two); h++)
	{
		if(two[h]==ch)
		{
			printf("position=%d\n",h);
		g++;
		}
	}
	if(g==0)
	{
		printf("The character is not in the string\n");
	}

	return 0;
}