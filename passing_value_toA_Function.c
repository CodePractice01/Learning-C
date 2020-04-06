/*****************
 * For in for loop example
 * **************/

#include <stdio.h>

void repeat(int count);

int main ()
{
	puts("call function 1: ");
	repeat(1);
	
	puts("Repeat and call again:");
	repeat(5);
	
	return (0);
	
}

void repeat(int count)
{
	int x;
	for(x=0;x<count;x++)
	{
		puts("Hit&Run!");
	}
}

