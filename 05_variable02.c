/*******
 * Variable - variable location 
 *
 * ******/
 
#include <stdio.h>


int main ()
{
	int a;
	char b;
	float c;
	

	printf("Memoy locations:");
	//&a find variable location on memory
	//%p is used to diplay that value
	printf("A is at %p\n",&a);
	printf("B is at %p\n",&b);
	printf("C is at %p\n",&c);
	
	return (0);
}

