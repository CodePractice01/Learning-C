/*******
 * Pointers
 *pointers must be initialized before ther're used
 * a pointer is assigned to the address of another variable
 * the pointer data type and its variable's data type must match
 * 
 * when used without the * operator, the pointer represents an ADDRESS
 * 
 * when used with the * operator, the pointer represents the VALUE at its address
 * ******/
 
#include <stdio.h>


int main ()
{
	int pokey;
	int *p;
	
	//&pokey optains the variable's location in memory
	pokey = 987;
	p= &pokey;
	
	printf ("The address of 'pokey' is %p\n", &pokey);
	printf("The address of 'p' is %p\n",p);
	
	//both lines return the same result
	
	printf ("The value of 'pokey' is %d \n",pokey);
	printf ("The value of '*p' is %d\n",pokey);
	return (0);
}

