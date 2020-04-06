/*******
 * Pointers - challenge 
 * ******/

#include <stdio.h>

int main()
{
	
	char a,b,c,*pointer;
	
	a = 'A'; //assign 'A' to varianble a
	pointer = &a; //set pointer to the address of a
	b= *pointer; //assign variable b to the value address by pointer
	pointer = &c; //set pointer p to the address of c
	*pointer = 'z'; //assign the value address by pointer to 'Z'
	
	printf("%c  %c  %c \n",a,b,c);
	

	
	return(0);
	}
