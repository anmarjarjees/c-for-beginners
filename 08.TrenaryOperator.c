#include <stdio.h>

int main()
{
	int age = 18;

	char canVote;

	int temp = 35;
	char isFreezing;
	float taxRate;
	long homeValue = 325000;
	canVote = (age >= 18) ? 't' : 'f';
	// canVote = if age>=18 then canVote = 't' or if age<18 then canVote = 'f';

	isFreezing = (temp < 32) ? 't' : 'f';

	taxRate = (homeValue > 350000) ? .0075 : .005;

	printf("Result: %c", canVote);
	printf("\n");
	printf("Is it freezing? %c", isFreezing);
	printf("\n");
	printf("Based on your home value, your tax rate is %.4f", taxRate);

	return 0;
}
