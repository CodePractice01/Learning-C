/*******
 * Structure 03 in C
 *
 * ******/
 
#include <stdio.h>
#include <string.h>

int main ()
{
	struct date {
		int year;
		int month;
		int day;
	};
	struct person {
		char name[32];
		struct date birtday;
	};
	
	struct person friend;
	
	strcpy(friend.name, "Zurli Gr");
	
	friend.birtday.year = 1990;
	friend.birtday.month = 04;
	friend.birtday.day = 30;
	
	printf("%s was born on %d/%d/%d\n",friend.name, friend.birtday.year,friend.birtday.month, friend.birtday.day);
	

	return (0);
}

