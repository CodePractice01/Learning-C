/*******
 * Structure in C
 *
 * ******/
 
#include <stdio.h>


int main ()
{
	struct bank {
		int account;
		float balance;
	};
	
	struct bank checking, savings;
	
	checking.account = 1234;
	
	checking.balance = 567.89;
	
	savings.account = 1010;
	savings.balance = 543.70;
	
	printf("Checking account %d has a balance of %f \n",checking.account, checking.balance);
	
	printf("Checking account %d has a balance of %f \n",savings.account, savings.balance);

	return (0);
}

