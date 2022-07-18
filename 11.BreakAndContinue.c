#include <stdio.h>

int main()
{
	int x = 0;
	/*
	while (x<101)
	{
		if (x==50)
		{
			printf ("**** Breaking Out Of Loop *****");
			break; // ends the loop entirely
		}
		printf("%d",x);
		printf("\n");
		x++;
	}
	*/

	while (x < 101)
	{
		if (x % 2 != 0)
		{
			x++;
			continue;
		}
		printf("%d", x);
		printf("\n");
		x++;
	}
	return 0;
}
