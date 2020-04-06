/**********************
 *  example for sqrt and pow operation
********************/

#include <stdio.h>
#include <math.h>

int main ()
{
		float r;
		float p;
		r= sqrt(2.0);
		p= pow(2.0,8.0);
		//pow - raise a value to a specific exponent 
		printf("The square root of 2 is %f\n",r);
		
		printf ("x to the 8th power is %f\n",p);

return (0);	
}
