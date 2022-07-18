
#include <stdio.h>

int main()
{
	long propertyValue = 975000; // large integer
	float taxRate;

	if (propertyValue < 125000)
	{
		taxRate = .005;
	}
	else if (propertyValue < 255000)
	{
		taxRate = .0075;
	}
	else if (propertyValue < 500000)
	{
		taxRate = .0075;
	}
	else if (propertyValue < 800000)
	{
		taxRate = .0085;
	}
	else
	{
		taxRate = .0099;
	}

	float taxes = taxRate * propertyValue;

	printf("Your tax rate is $%0.4f", taxRate); // %0.4f To add 4 decimal places to the right of the point
	printf("\nYour tax bill is $%0.2f", taxes); // %0.2f To add 2 decimal places to the right of the point
	printf("\n");
	return 0;
}
