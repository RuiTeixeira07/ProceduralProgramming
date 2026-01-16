
#include <stdio.h>

void main()
{
	float mark;

	printf("Insert a mark between 0 and 100: \n");
	scanf_s("%f", &mark);

	if (mark >= 0 && mark < 50)
	{
		printf("Failed.");
	}
	else if (mark >= 50 && mark <= 100)
	{
		printf("Passed.");
	}
	else
	{
		printf("Insert a mark between 0 and 100.");
	}
}