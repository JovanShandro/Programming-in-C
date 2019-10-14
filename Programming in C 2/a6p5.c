/*
	JTSK-320112
	a6 p5.c
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int n;
	char nl = '\n';

    scanf("%d", &n);
    getchar();

    // read the names of the files
    char *files[n];
    for(int i = 0; i < n; i++)
	{
		// Assuming no name will be more than 30 chars long
        files[i] = (char*)malloc(30*sizeof(char));
        fgets(files[i], 30, stdin);
        files[i][strlen(files[i])-1] = '\0';
    }

    // open a file to write the output, called 'output.txt'
    FILE *out;
    out = fopen("output.txt", "wb");

    if(!out)
        exit(1);

    printf("The concatenation of all files is:\n");

    for(int i = 0; i < n; i++){

        FILE *f;
        f = fopen(files[i], "rb");
        if(!f)
            exit(1); 
			
        // Find length of file f
        fseek(f, 0, SEEK_END);
        int len = ftell(f);
        fseek(f, 0, SEEK_SET);

		// Create buffer and allocate enough memory
		char *buff;
        buff = (char*)malloc(sizeof(char)*(len+1));
		
		// Concat f and out
        fread(buff, sizeof(char), len, f);
        fwrite(buff, sizeof(char), len, out);
        printf("%s\n", buff);
       
	    fclose(f);        
		free(buff);

        // Write new line in end of file 
        fwrite(&nl, sizeof(char), 1, out);
    }

    // Deallocate Memory and close out
    for(int i = 0; i < n; i++){
        free(files[i]);
    }
    fclose(out);

   return 0;
}