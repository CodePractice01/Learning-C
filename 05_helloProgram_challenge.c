/*******
 * challegnge-hello program
 * ******/
 
 #include <stdio.h>
 #include <stdlib.h>
 
 #define SIZE 64
 
int main()
{

	char *name;
	
	name = malloc( sizeof(char) * SIZE);
	
	if(name == NULL)
	{
			puts("Unable to allocate memory");
			return(1);
	}
	
	printf("Enter your name: ");
	fgets(name, SIZE,stdin);
	printf("Please to meet you , %s",name);
	
	return(0);
	
	return(0);
	
}
