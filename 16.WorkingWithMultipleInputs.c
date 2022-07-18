#include <stdio.h>
/* processing user input */
int main()
{							  /* variable that holds more than one value */
	float operand1, operand2; // declare two variable as float

	printf("Enter two numbers you want multiplied together: ");
	scanf("%f %f", &operand1, &operand2);

	float result = operand1 * operand2;
	printf("the result of multiplying %0.2f and %0.2f is %0.2f", operand1, operand2, result);

	return 0;
}
