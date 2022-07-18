#include <stdio.h>

// Function Prototype
void greetUserByName(char name[]);
void addThree(int x, int y, int z);

int main()
{ /* variable that holds more than one value */
	// Char array to hold the user name
	char userName[20];
	printf("What is your name: ");
	scanf("%s", userName);

	greetUserByName(userName);
	printf("Thanks for playing.\n");

	addThree(10, 25, 75);

	return 0;
}

void greetUserByName(char name[])
{
	printf("Thanks for typing your name %s \n", name);
}

void addThree(int x, int y, int z)
{
	int result = x + y + z;
	printf("The result of adding %d, %d and %d is %d \n", x, y, z, result);
}
