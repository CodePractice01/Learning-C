/**************************
	Work with getchat and putchar datat types
*/
#include <stdio.h>

int main()
{
	 int c,a;
	 
	 printf ("Type two letters-> ");
	 
	 c=getchar();
	 a=getchar();
	// printf("You typed '%c' .\n",c);
	 
	 putchar(c);
	 
	 printf("' and '");
	 
	 putchar(a);
	 
	 printf("'.\n");
	 
	 
	 return(0);
	
	}
