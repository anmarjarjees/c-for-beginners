#include <stdio.h>

// Function prototype
// Function that returns a value, so this function will not have void

int main()
{ /* variable that holds more than one value */
	int firstInt = 425;
	int secondInt = -672;
	char firstChar = 'C';
	float firstFloat = 2.771f;
	char firstCharArray[] = "LearnToProgram.tv";

	printf("\nThe address of the variable firstInt: %u", &firstInt);
	printf("\nThe address of the variable secondInt: %u", &secondInt);
	printf("\nThe address of the variable firstChar: %u", &firstChar);
	printf("\nThe address of the variable firstFloat: %u", &firstFloat);
	printf("\nThe address of the variable firstCharArray: %u", &firstCharArray);

	int *pointerFirstInt; // pointer starts with * pointer
	pointerFirstInt = &firstInt;

	int *pointerSecondInt;
	pointerSecondInt = &secondInt;

	char *pointerFirstChar;
	pointerFirstChar = &firstChar;

	float *pointerFirstFloat;
	pointerFirstFloat = &firstFloat;

	printf("\n");

	printf("\n");
	return 0;
}
