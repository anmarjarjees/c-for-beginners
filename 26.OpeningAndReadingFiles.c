#include <stdio.h>
#include <iostream> // to use files

int main()
{ /* variable that holds more than one value */
	FILE *pFile;
	char input[81];

	// Write your path below:
	pFile = fopen("/.../CProgrammingForBeginners/test.txt", "r");

	if (pFile != NULL)
	{
		// Process File
		while (!)
	}
	else
	{
		// IO Error
		printf("IO Error: problem with File");
	}
	return 0;
}
