#include <stdio.h>

// Function Prototype
void greetTheUser(void);
void sayGoodBye(void);

int main()
{ /* variable that holds more than one value */

	greetTheUser();
	sayGoodBye();

	greetTheUser();
	sayGoodBye();

	greetTheUser();
	sayGoodBye();

	greetTheUser();
	sayGoodBye();
	return 0;
}

void greetTheUser(void)
{ // it is an empty function that doesn't return function
	printf("Hello! How are you doing!\n");
}

void sayGoodBye(void)
{
	printf("Bye User!\n");
}
