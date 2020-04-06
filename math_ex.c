/**********************
 *  example with increment/decrement
********************/
#include <stdio.h>

int main()
{
	int a;
	int b = 5;
	printf("Input an integer: ");
	scanf("%d",&a);
	
	printf ("%d + %d = %d\n",a,b,a+b);
	
	printf ("%d - %d = %d\n",a,b,a-b);
	
	
	/* ----------*/
	
	
	float c;
	float d = 5.0;
	
	printf("enter a number:");
	scanf("%f", &c);
	
	printf ("%f / %f = %f\n",c,d,c/d);
	
	/* ----------*/
	//decrement-increment
	
	int x=20;
	
	printf("x = %d\n",x);
	//x++;
	x--;
	printf("New value-%d",x);
	
	return(0);
}
