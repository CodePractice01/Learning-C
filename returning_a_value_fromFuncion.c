/*****************
 *  Returning a value from function
 * **************/

#include <stdio.h>

char gimmeAanA(void);

int main ()
{
		printf ("On this test you'' receive and %c.\n",gimmeAanA() );
		
		return (0);
	
}

char gimmeAanA(void)
{
	return ('A');
}

