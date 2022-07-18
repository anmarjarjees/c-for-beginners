#include <stdio.h>

int main()
{ /* variable that holds more than one value */
	int ages[5];

	ages[0] = 37; /* arrays in c are 0 index */
	ages[1] = 31;
	ages[2] = 3;
	ages[3] = 1;
	ages[4] = 30;
	// ages[10]=21; // this will make the program stop working

	// float gpas[] = {3.14f,2.55f,3.99f,2.1f,1.75f};

	printf("One of my family members is %d years old", ages[1]);
	printf("\n Anther of my family members is %d years old", ages[4]);
	printf("\n This array index doesn't exist: ", ages[10]);

	return 0;
}
