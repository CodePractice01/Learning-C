/**********************
 * scanf function  example
********************/
#include <stdio.h>

int main()
{
		char name[15];
		printf("Your favorite sport \n");
		scanf("%s",name);
		
		printf("Hooray-for- %s",name);
		
		return(0);
}

