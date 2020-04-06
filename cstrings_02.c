/*******
 * manipulating strings -strcpy - strcat ( tring.h header file)
 * 
 * ******/
 
 #include <stdio.h>
 #include <string.h>

int main ()
{
	
	char first[] = "I would like to go ";
	char second[] = "from here to there \n";
	char buffer[50];
	
	//string copy function--copies the firs string into the buffer
	strcpy(buffer,first);
	
	//string concatenate function = copies the second string to the end of the first string
	strcat(buffer, second);
	puts(buffer);
	 
	 return (0);
}

