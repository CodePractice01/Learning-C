/*******
 * Variable - sizeof operator
 *
 * ******/
 
#include <stdio.h>


int main ()
{
	char a;
	short b;
	int c;
	long d;
	float e;
	double f;
	
	struct stuff {
		int a;
		float b;
		char c[32];
	};
	
	//sizeof is a keyword  but it's considered an operator
	//return how many bytes of storage are used by a specific variable
	printf("A char variable occupies %lu bytes of storage\n", sizeof(a));
	printf("A short variable occupies %lu bytes of storage\n", sizeof(b));
	printf("An int variable occupies %lu bytes of storage\n", sizeof(c));
	printf("A long variable occupies %lu bytes of storage\n", sizeof(d));
	printf("A float variable occupies %lu bytes of storage\n", sizeof(e));
	printf("A double variable occupies %lu bytes of storage\n\n\n", sizeof(f));
	
	printf("The structure 'stuff' occupies %lu bytes of storage\n", sizeof(struct stuff));
	return (0);
}

