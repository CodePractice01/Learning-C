/*******
 * challenge strings -strcpy - strcat ( tring.h header file)
 * 
 * ******/
 
 #include <stdio.h>
 #include <string.h>

int main ()
{
	
	char fullName[64];
	char firstName[32];
	char lastName[32];
	
	printf("First name: ");
	fgets(firstName,32,stdin);
	
	printf("Last name: ");
	fgets(lastName,32,stdin);
	
	strcpy(fullName, firstName);
	strcat(fullName, lastName);
	
	printf("FullName: %s",fullName);
	
	return (0);
}

