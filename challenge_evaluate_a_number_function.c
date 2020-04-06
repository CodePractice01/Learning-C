/*****************
 * passing value to function
 * **************/

#include <stdio.h>

void evaluate(int nr);

int main ()
{
	int z;
	
	printf("Type a value:");
	scanf("%d",&z);
	evaluate(z);
	
	return (0);
	
}

void evaluate(int nr)
{
	if(nr < 10)
		printf("The value %d is less than 10.\n", nr);
	else if (nr > 10)
		printf ("The value %d is greater than 10.\n",nr);
}

