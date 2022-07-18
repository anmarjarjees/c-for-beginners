/*
 * 03.SimpleStringDemo
 *
 *
 *      Author: Anmar
 */
#include <stdio.h>
#include <string.h> // a string header: gives all the string commands the available in C

int main()
{
	char name[] = "Anmar Jarjees"; // multiple char in name; name is an array, name is an array of characters
	printf("Your name is %s ", name);
	printf("\n");

	int length;
	length = strlen(name); // strlen() Built-in function for string.h

	printf("There are %d characters in the string.", length);
	printf("\n");

	return 0;
}
