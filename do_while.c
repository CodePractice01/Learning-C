/*************
 * Do While structure in C
 * ***********/

#include <stdio.h>

int main()
{
	char ch;
		
	ch='A';
	do{
		putchar(ch);
		ch++;
	}
	while(ch!= 'Y');
	
	putchar ('\n');
	
	return(0);
	
}

