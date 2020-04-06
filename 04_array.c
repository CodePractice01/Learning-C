/*******
 * Array
 * --collection of several variables, all of the same data type
 * ******/
 
#include <stdio.h>

#define MEALS 3

int main ()
{
	
	int calories[MEALS];
	int x, total;
	
	total = 0;
	puts("Calorie Counter");
	for(x=0;x<MEALS;x++)
	{
			printf("Calories at meal %d:" ,x+1);
			//-&calories[x] -- & >individual variable not an array
			scanf("%d ",&calories[x]);
			//the value input is added to the total variable 
			total += calories[x];
	}
	printf ("Total no of calories -- %d .\n", total);
	return (0);
}

