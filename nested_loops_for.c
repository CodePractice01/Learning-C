/*****************
 * For in for loop example
 * **************/

#include <stdio.h>

int main ()
{
	char alpha;
	int nr;
	
	/*for(alpha='A';alpha<'K';alpha++)
	{
		for(nr=0;nr<10;nr++)
		{
			printf("%c-%d\t",alpha, nr );
		}
		putchar('\n');
	}*/
	
	alpha='A';
	while(alpha<'K')
	{
			nr = 0;
			while(nr<10)
			{
					printf("%c-%d\t",alpha, nr );
					nr++;
			}
			putchar('\n');
			alpha++;
	}
	
	return (0);
	
}

