#include <stdio.h>

// Function prototype
// Function that returns a value, so this function will not have void

int main()
{ /* variable that holds more than one value */
	int playerScore = 425;
	int *pointerPlayerScore = &playerScore;

	printf("Address of playerScore: %p\n", pointerPlayerScore);
	printf("The value of playerScore: %d\n", playerScore);
	printf("The value of playerScore through its pointer: %d\n", *pointerPlayerScore);
	printf("\n");

	playerScore = playerScore + 1500;
	printf("Added 1500 to playerScore.");
	printf("The value of playerScore: %d\n", playerScore);
	printf("The value of playerScore through its pointer: %d\n", *pointerPlayerScore);
	printf("\n");

	*pointerPlayerScore = *pointerPlayerScore - 1000;
	printf("Subtracted 1000 to playerScore.");
	printf("The value of playerScore: %d\n", playerScore);
	printf("The value of playerScore through its pointer: %d\n", *pointerPlayerScore);
	printf("\n");

	/* don't do this moving the pointer mathematically */
	pointerPlayerScore = pointerPlayerScore - 10;
	printf("Subtracted 10 to playerScore.");
	printf("The value of playerScore: %d\n", playerScore);
	printf("The value of playerScore through its pointer: %d\n", *pointerPlayerScore);
	printf("\n");
	return 0;
}
