/**********************
 * explain fgets with multiple parameters  
********************/

#include <stdio.h>

int main()
{
		char input[64];
		printf("Describe something \n");
		fgets(input,64,stdin);
		//first parameter -- string input buffer
		//second - maximum number of character
		//third argument - is the file from which to read and for standard input it's stdin
		
		puts("Hooray\n");
		puts(input); //return what we typed
		
		return(0);
}


