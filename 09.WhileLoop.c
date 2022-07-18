#include <stdio.h>

int main()
{
	int counter = 100;

	/*
	while(counter < 101)
	{
		printf("%i",counter); // %i also for integer
		printf("\n");
		counter++;
	}
	*/

	/*
	while (counter>0)
	{
		printf ("%i",counter);
		printf ("\n");
		counter--; // counter= counter - 10;
	}
	*/

	do
	{ /* is going to iterate one time at least */
		printf("%i", counter);
		printf("\n");
		counter = counter - 5;
	} while (counter > 0);

	return 0;
}
