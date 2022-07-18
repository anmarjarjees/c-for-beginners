/*
 * 04.Arithmetic-Operators.c
 *
 *
 *      Author: Anmar
 */
#include <stdio.h>

int main()
{
	int age = 47;
	int ageNextYear = age + 1;
	int ageFiveYearsAgo = age - 5;
	int twiceMyAge = age * 2;
	float halfMyAge = age / 2.0; // We need to .0 decimal point to get the floating value not an integer value

	printf("Age: %d", age);
	printf("\n");
	printf("Age next year: %d", ageNextYear);
	printf("\n");
	printf("Age Five Years ago: %d Twice my age:%d", ageFiveYearsAgo, twiceMyAge); // to print two variables in one sentence
	printf("\n");
	printf("Half My age: %f", halfMyAge);

	// Modulus is the remainder after division
	// 19 % 5 = 4
	printf("\n");
	int modNumber = 19 % 5;
	printf("the result of the modulus operation: %d", modNumber);

	int myDogAge = 49; // the increment operator
	myDogAge++;		   // myDogAge = myDogAge+1
	printf("\n");
	printf("My dogs age: %d", myDogAge);

	// the decrement operator
	myDogAge--;
	printf("\n");
	printf("My dogs age: %d", myDogAge);
	return 0;
}
