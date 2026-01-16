
#include <stdio.h>

void main()
{
	float a, b;

	printf("Insert the value of 'a': \n");
	scanf_s("%f", &a);

	printf("Insert the value of 'b': \n");
	scanf_s("%f", &b);

	printf("Sum: %.1f", a + b);
}