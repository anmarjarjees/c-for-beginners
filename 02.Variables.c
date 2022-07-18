/*
 * Variables.c
 *
 *  Created on: 2013-06-18
 *  Author: Anmar
 */
#include <stdio.h> // standard input and output header
// all the code run inside the main function
int main()
{
	int playerScore; // Variable Declaration - 4 Bytes

	// playScore is assigned the value 26000
	playerScore = 26000; // = is the assignment operator

	char firstInitial; // a single character or very small number

	firstInitial = 'M';
	printf("Score: %d", playerScore);
	printf("\n First Initial: %c", firstInitial);

	// combined Declaration and Initialization
	short age = 37; /* Short integer -32768 and + 32767 */
	// or
	age = 37 + 2;

	printf("\nSam is %d yeas old", age);

	long nationalDebt = 108989845; // long integer
	printf("\nnationalDebt: %d", nationalDebt);

	// floating variable
	float gpa = 3.75;
	printf("\nSam's fake GPA: %f", gpa); // %f signifier to declare a float

	double taxRate = 4.575;
	printf("\nThe Tax rate is : %f", taxRate); // %f signifier to declare a float or double
	return 0;
}
