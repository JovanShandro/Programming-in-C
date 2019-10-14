/*
	JTSK-320111
	a6 p10.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 

	FILE *fp1,*fp2,*fp3;
	char c; 
   // Open two files to be merged 
   fp1 = fopen("text1.txt", "r"); 
	fp2 = fopen("text2.txt", "r"); 
  
   // Open file to store the result 
   fp3 = fopen("merge12.txt", "w"); 
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { 
         printf("Sorry ,we could not open the files!\n"); 
         exit(1); 
   } 
  
   // Copy contents of first file to merge12.txt 
   while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
  
	fputc('\n',fp3);
  
   // Copy contents of second file to merge12.txt 
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3);  
  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
