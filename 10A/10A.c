
#include <stdio.h>

void main()
{
	float test1;
	float test2;

	printf("Insert the grade of the first test (0-20): \n");
	scanf_s("%f", &test1);
	printf("Insert the grade of the second test (0-20): \n");
	scanf_s("%f", &test2);

	if (test1 < 0 || test1 > 20 || test2 < 0 || test2 > 20)
	{
		printf("Insert a grade between 0 and 20!");

		return;
	}

	float finalGrade = (test1 + test2) / 2;

	if (finalGrade < 9.5)
	{
		printf("Failed.");
	}
	else
	{
		printf("Passed.");
	}
}