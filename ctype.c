/*******
 * Manipulating single characters
 * 
 * ******/
 
 #include <stdio.h>
 #include <ctype.h>
 

int main ()
{
	
	int ch = 'a';
	
	printf ("Original %c\n ",ch);
	printf ("Lowercase %c\n ",tolower(ch));
	printf ("Uppercase %c\n ",toupper(ch));
	printf ("Original %d\n ",ch);
	 
	 int c;
	 
	 do
	 {
		c= getchar();
		if(isalpha(c))
		{
			c=toupper(c);
			putchar(c);
		}
			
	 }while(c != '\n');
	 
	 return (0);
}
