/*******
 * logical Operators in C
 * 
 * ******/
 
 #include <stdio.h>
 
int iscaps(int ch);

int main ()
{
	
	 int c;
	 
	 do
	 {
		c= getchar();
		if(iscaps(c))
		{
			putchar(c);
		}
			
	 }while(c != '\n');
	 
	 return (0);
}

int iscaps(int ch)
{
	if(ch < 'A' || ch >'X')
		return (0); //returns false
	else
		return(1);//returns true
}
