#include <stdio.h>

int age = 47; // age is global variable

// Function prototype
// Function that returns a value, so this function will not have void
void displayStuff(void);

int main()
{ /* variable that holds more than one value */
	// int age =47; // local Scope these variable on recognized inside the main function
	float gpa = 3.55f;
	char grade = 'A';

	// printf ("\n the variable name is %d",x);
	printf("My gpa was %f", gpa);
	printf("\nMy age is %d", age);
	printf("\nKalmar got an %c on his test", grade);
	printf("\n");
	displayStuff();
	return 0;
}

void displayStuff(void)
{
	// int x =22;
	printf("\nMy age is %d", age);
}
