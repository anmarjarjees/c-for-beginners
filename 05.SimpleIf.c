
#include <stdio.h>

int main()
{

	int age = 15;
	int ageToVote = 18;
	/*
		 > Greater Than
		 < Less Than
		 >= Greater Than or Equal to
		 <= Less Than or Equal to
		 == Equal to
		 != Not Equal to
	 *
	 * */
	if (age >= ageToVote)
	{
		printf("You are old enough to vote.\n");
	}

	int ageOnBirthday = 21;
	if (ageOnBirthday == 21)
	{
		printf("You can legally drink on your birthday.\n");
	}

	int fredAge = 65;
	if (fredAge > 60 && fredAge < 70) // or we can use || pipe symbol
	{
		printf("Fred is between 60 and 70. \n");
		printf("You go Fred:\n");
	}
	return 0;
}
