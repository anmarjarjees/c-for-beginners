#include <stdio.h>

int main()
{
	/* variable that holds more than one value */
	float gpas[] = {3.17f, 3.99f, 2.5f, 3.21f, 1.95f, 1.65f, 3.45f, 3.5f, 4.0f}; // 9 values in the gpas array

	float total = 0.0;

	int i;
	for (i = 0; i < 9; i++)
	{
		printf("\n");
		printf("GPA %d: %0.3f", (i + 1), gpas[i]); // %0.3f t get 3 decimal points
		printf("\n");
		total += gpas[i];
	}
	printf("\n");
	printf("The total pgas is %f", total);
	printf("\n");
	printf("The average GPA is: %f", (total / 9.0));

	return 0;
}
