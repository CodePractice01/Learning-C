/*************
 * Case structure in C
 * ***********/

#include <stdio.h>

int main()
{
		int a;
		
		printf("Your choise is:1/2/3\n\n");
		scanf("%d", &a);
	
	switch(a)
	{
		case 1:
			puts("Red");
			break;
		case 2:
			puts ("Green");
			break;
		case 3:
			puts ("Blue");
			break;
		default:
			puts("nema number");
	
	}
	return(0);
}
