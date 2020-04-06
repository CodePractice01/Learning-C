/*****************
 * While, for loop example
 * **************/

#include <stdio.h>

int main ()
{
	int a;
	for(a=0;a<=20;a++)
	{
		printf("A value = %d\n",a+1 );
	}
	
	int x=-10;
	while(x<=10)
	{
		printf("X <> %d\n",x);
		x=x+2;
	}
	return (0);
	
}
