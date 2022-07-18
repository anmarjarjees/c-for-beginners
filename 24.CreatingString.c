#include <stdio.h>
/*
 * C doesn't have a real string concept
 * C uses char array
 *
 */
int main()
{ /* variable that holds more than one value */
	char companyName[] = "LearnToProgram.tv, Incorporated";

	printf("Company Name: %s", companyName);

	printf("\n");
	printf("\n");
	printf("Pointer to companyName in Memory: %p", companyName); // the output will be 0000000000022FF30
	return 0;
}
