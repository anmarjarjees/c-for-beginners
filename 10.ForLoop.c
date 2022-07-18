#include <stdio.h>

int main()
{
	for (int x = 0; x < 501; x = x + 5)
	{
		printf("the value of x is %d", x);
		printf("\n");
	}
	printf("\n\n");

	for (int i = 1000; i > -1; i = i - 13)
	{
		printf("The value of i: %d", i);
		printf("\n");
	}
	return 0;
}
