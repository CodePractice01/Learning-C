/*******
 * Structure 02 in C
 *
 * ******/
 
#include <stdio.h>


int main ()
{
	struct person {
		char name[32];
		int age;
	};
	
	struct person president ={
		"Ion Iliescu",
		103
	};
		
	
	printf("%s still alive at %d years \n",president.name, president.age);
	

	return (0);
}

