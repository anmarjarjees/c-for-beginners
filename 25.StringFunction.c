#include <stdio.h>
#include <string.h> // include the string library
/*

 * C uses char array
 *
 */
int main()
{ /* variable that holds more than one value */
	char sentence[] = "The quick brown fox jumped over the lazy dogs";
	int length = strlen(sentence); // strlen --> the number of char

	printf("In sentence there are %d characters.\n", length);

	char string1[20] = "Sam ";	// we need to declare enough space in string1 to have string2
	char string2[] = "Simpson"; // 7 char

	strncat(string1, string2, 8);
	printf("After concatenation string1 looks like this: %s string1 length:%d\n", string1, strlen(string1));

	char stringA[] = "Today";
	char stringB[] = "today";

	if (strcmp(stringA, stringB) == 0) // the string comparison is case sensitive
	{
		printf("These strings are the same!");
	}
	else
	{
		printf("These strings are not the same!\n");
	}
	return 0;
}
