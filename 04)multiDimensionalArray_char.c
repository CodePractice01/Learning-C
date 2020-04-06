/*******
 * Multi dimension array- char
 *
 * ******/
 
#include <stdio.h>


int main ()
{
	//names[4][5]
	//4 = thee rows or strings in the array
	// 5 = represent the lenght of the longest string plus one for the null character ar the end of string
	// ex Duck(4+1)
	char names[4][5] = {
			"Ant", 
			"Bee",
			"Cat",
			"Duck"
	};
	
	int x;
	
	names[2][2] = 'r'; //Cat -> Car
	
	for(x=0;x<4;x++)
		printf("%s\n ", names[x]);
		
	return (0);
}

