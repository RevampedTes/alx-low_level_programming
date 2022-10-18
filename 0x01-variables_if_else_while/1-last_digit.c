#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - more headers goes there
 * make nobody stress me
 * Return: this is somthing
 */
int main(void)
{
	int n;
	int lig;
	char text[] = "Last digit of";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lig = n % 10;
	if (lig > 5)
	{
		printf("%s %d is %d and is greater than 5\n", text, n, lig);
	}
	else if (lig == 0)
	{
		printf("%s %d is %d and is 0\n", text, n, lig);
	}
	else if (lig != 0 && lig < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", text, n, lig);
	}

	return (0);

}
