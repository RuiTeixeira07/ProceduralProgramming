
#include <stdio.h>

void main()
{
	float test1, test2, finalGrade;

	printf("Insert the grade of the first test (0-20): \n");
	scanf_s("%f", &test1);

	if (test1 < 0 || test1 > 20)
	{
		printf("Insert a mark between 0 and 20.\n");

		return;
	}
	else if (test1 < 8.5)
	{
		printf("Failed.");

		return;
	}

	printf("Insert the grade of the second test (0-20): \n");
	scanf_s("%f", &test2);

	if (test2 < 0 || test2 > 20)
	{
		printf("Insert a grade between 0 and 20.\n");

		return;
	}
	else if (test2 < 8.5)
	{
		printf("Failed.\n");

		return;
	}

	finalGrade = 0.4 * test1 + 0.6 * test2;

	printf("Final Grade: %.1f.", finalGrade);
}