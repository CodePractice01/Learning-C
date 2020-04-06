/*******
 * Pointers - challenge 
 * ******/
 
 #include <stdio.h>
 
int main()
{
	//pointer array
	/*char *month[12]={
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"Octomber",
		"November",
		"December"
		};
		
		int x;
		
		for(x=0;x<12;x++)
		{
			//printf("%s\n",month[x]); //display the string of array 
			printf("%p\n",month[x]); //display the memory location
		}*/
		
		//exemplul 2
		
		char *presidents[6]={
			"Ceausescu",
			"Constantinescu",
			"Iliescu",
			"Cumpanasu",
			"Basescu 1 && 2",
			"Yohanis Lentu"			
			};
			
			int x;
			char *ptr;
			
			for(x=0;x<6;x++)
			{
				//pointerul este setat cu inceputul de locatie
				
				//ptr = presidents[x];
				
				ptr = *(presidents+x); //foloseste adresa memoriei 'inregistrata' in variabila presidents--'not the string. the location'
				//va returna cate un caracter pe rand
				while(*ptr)
				{
					putchar(*ptr);
					ptr++;
				}
				putchar('\n');
			}
		return(0);
	
	}
