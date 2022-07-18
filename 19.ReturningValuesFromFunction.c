#include <stdio.h>

// Function prototype
// Function that returns a value, so this function will not have void
int square(int x);

int main()
{ /* variable that holds more than one value */
	// Char array to hold the user name
	printf("Enter your number to be squared: ");
	int userNum;
	scanf("%d", &userNum);
	int result = square(userNum);

	printf("\nThe result is: %d", result);
	return 0;
}

int square(int x)
{
	return (x * x);
}
