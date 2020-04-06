/**********************
 *  exercise with math operation
********************/


#include <stdio.h>
#include <math.h>

int main()
{
		float a,b;
		
		float sqrt_a;
		float sqrt_b;
		
		printf("Value for A > ");
		scanf("%f",&a);
		printf("Value for B > ");
		scanf ("%f",&b);
		
		printf("%f + %f = %f\n",a,b,a+b);
		
		printf("%f - %f = %f\n",a,b,a-b);
		
		printf("%f * %f = %f\n",a,b,a*b);
		
		printf("%f / %f = %f\n",a,b,a/b);
		
		sqrt_a= sqrt(a);
		sqrt_b= sqrt(b);
		
		printf("%f to the %f power = %f\n",a,b,pow(a,b));
		
		printf("the square root of %f = %f\n", a,sqrt_a);
		
		printf("sqrt  %f = %f\n",b,sqrt_b);
	
	return(0);
}
