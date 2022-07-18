
#include <stdio.h>

int main()
{
	char letterGrade = 'B';

	switch (letterGrade)
	{
	case 'A':
	case 'a':
		printf("Great job! outstanding achievement");
		break;

	case 'B':
	case 'b':
		printf("Good job. Above average achievement");
		break;

	case 'C':
	case 'c':
		printf("Average achievement");
		break;

	case 'D':
	case 'd':
		printf("Low passing grade");
		break;
	case 'F':
	case 'f':
		printf("Failure. You must retake teh class.");
		break;

	default:
		printf("Letter grade not recognized by the system");
	}
	return 0;
}
