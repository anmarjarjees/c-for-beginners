#include <stdio.h>

int main()
{ /* variable that holds more than one value */
	// char name[5]="Sam";
	/* data type = char, Sam is 4 letters, we need the fifth character name[5]
	 * because every sting in c is terminated with string terminated charter or a null which \0 by
	 */

	// Or we can do the following (the long way) but it's inconvenient
	// this way is better: char name[5]="Sam";
	char name[] = {'S',
				   'a',
				   'M',
				   '\0'};

	char fullName[10] = "Sam Simpson";

	printf("My name is: %s", name); // %s string
	printf("\n");
	printf("My full name is: %s", fullName); // %s string
	printf("\n");
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Character Number %d is %c", (i + 1), fullName[i]);
		printf("\n");
	}
	return 0;
}
