#include <stdio.h>
/* processing user input */
int main () { /* variable that holds more than one value */
	/*
	char response;
	printf ("Are you over the hill (Y=Yes, N=No) ");
	response = getchar();
	*/

	/*
	printf("\n");
	printf ("Your response is %c", response);
	printf("\n");
	 */
	/*
	getchar();
	//getchar();
	printf ("\n");
	if (response =='Y' || response =='y')
	{
		printf("Sorry to hear it! Enjoy your life now");
		printf ("\n");
	}
	else if (response == 'N' || response =='n')
	{
		printf ("Glad you are not over the hill");
		printf ("\n");
	} else {
		printf ("Sorry your response was ( %c ) and it's not understood. Enter Y or N", response);
		printf ("\n");
	}

	getchar();
	*/

	/*
	char name[20];
	printf("\n");
	printf ("Please input your name: ");
	scanf ("%19s", name); // accept the character up to 19 which the size of the signifier %19 in order not to get errors
	printf("\n");
	printf ("Your name is %s", name);
	printf("\n");
	*/

	int age;
	printf ("How old are you?");
	printf("\n");
	// using scanf to get an numerical input
	scanf("%d", &age); // for entering numeric values we have to use the address of the operator to store the information
	/* so &age & is the pointer to point to the address of the variable */
	age = age*7;
	printf ("\nIn dog years you are %d years old.", age);
	printf ("\n");


	return 0;
}
